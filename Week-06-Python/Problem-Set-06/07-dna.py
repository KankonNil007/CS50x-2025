import csv
import sys


def main():

    # TODO: Check for command-line usage
    if (len(sys.argv) != 3):
        print("Missing Command Line Argument!!")
        sys.exit(1)

    # Read CSV file into memory
    csv_file = sys.argv[1]
    people = []
    with open(csv_file, "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            people.append(row)

    # Read DNA sequence file into memory
    sequence_file = sys.argv[2]
    with open(sequence_file, "r") as file:
        sequence = file.read().strip()

    # Get STRs from CSV header (excluding 'name')
    strs = reader.fieldnames[1:]  # Skip 'name' column

    # Compute longest consecutive repeats for each STR in the sequence
    sequence_counts = {}
    for str_seq in strs:
        sequence_counts[str_seq] = longest_match(sequence, str_seq)

    # Compare sequence counts with each person's counts
    for person in people:
        match = True
        for str_seq in strs:
            # Convert CSV count to int for comparison
            if int(person[str_seq]) != sequence_counts[str_seq]:
                match = False
                break
        if match:
            print(person["name"])
            return

    # If no match is found
    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
