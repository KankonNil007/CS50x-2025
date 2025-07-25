#include <cs50.h>
#include <stdio.h>

int get_digit_count(long number);
int get_first_n_digits(long number, int n);
bool is_valid_luhn(long card_number);

int main(void)
{
    // Step 1: Get credit card number from the user
    long card_number = get_long("Number: ");

    // Step 2: Check validity using Luhn's Algorithm
    if (!is_valid_luhn(card_number))
    {
        printf("INVALID\n");
        return 0;
    }

    // Step 3: Get the number of digits in the card
    int digit_count = get_digit_count(card_number);

    // Step 4: Identify card type using starting digits
    int first_two_digits = get_first_n_digits(card_number, 2);
    int first_digit = get_first_n_digits(card_number, 1);

    if ((digit_count == 15) && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
    }
    else if ((digit_count == 16) &&
             (first_two_digits >= 51 && first_two_digits <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((digit_count == 13 || digit_count == 16) && (first_digit == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

// Function to count number of digits in the card
int get_digit_count(long number)
{
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

// Function to get the first n digits of the card number
int get_first_n_digits(long number, int n)
{
    while (get_digit_count(number) > n)
    {
        number /= 10;
    }
    return (int)number;
}

// Function to apply Luhn's algorithm
bool is_valid_luhn(long card_number)
{
    int sum = 0;
    bool is_second = false;

    while (card_number > 0)
    {
        int current_digit = card_number % 10;

        if (is_second)
        {
            int doubled = current_digit * 2;
            sum += (doubled / 10) + (doubled % 10); // Add digits of doubled number
        }
        else
        {
            sum += current_digit;
        }

        card_number /= 10;
        is_second = !is_second; // Flip flag every loop
    }

    return (sum % 10 == 0);
}