import csv

with open("Week-07-SQL/favorites.csv", "r") as file:
    # reader = csv.reader(file)
    # next(reader)
    # for rows in reader:
    #     print(rows[1])

    # reader = csv.DictReader(file)
    # for rows in reader:
    #     print(rows["language"])

    # reader = csv.DictReader(file)
    # scratch, c, python = 0, 0, 0
    # for rows in reader:
    #     name = rows["language"]
    #     if (name == "Scratch"):
    #         scratch += 1
    #     elif (name == "C"):
    #         c += 1
    #     elif (name == "Python"):
    #         python += 1

    # print(f"Scratch: {scratch}")
    # print(f"C: {c}")
    # print(f"Python: {python}")

    reader = csv.DictReader(file)
    counts = {}
    for rows in reader:
        name = rows["language"]
        if name in counts:
            counts[name] += 1
        else:
            counts[name] = 1

    for item in sorted(counts, key=counts.get, reverse=True):
        print(f"{item}: {counts[item]}")