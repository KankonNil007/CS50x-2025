card = input("Number: ")

revCard = card[::-1]

def Luhn(card):
    sum1 = 0
    sum2 = 0

    for i, n in enumerate(card, start=1):
        if (i % 2 == 0):
            if ((int(n) * 2) > 9):
                for j in str(int(n) * 2):
                    sum1 = sum1 + int(j)
            else:
                sum1 = sum1 + (int(n) * 2)

        else:
            sum2 = sum2 + int(n)

    if ((sum1 + sum2) % 10 == 0):
        return True
    else:
        return False

if (len(card) == 15 and Luhn(revCard) == True and card.startswith(("34", "37"))):
    print("AMEX")
elif (len(card) == 16 and Luhn(revCard) == True and card.startswith(("51", "52", "53", "54", "55"))):
    print("MASTERCARD")
elif (len(card) == 13 and Luhn(revCard) == True and card.startswith("4")):
    print("VISA")
elif (len(card) == 16 and Luhn(revCard) == True and card.startswith("4")):
    print("VISA")
else:
    print("INVALID")
