people = [
    {"name": "Kankon", "number": "8732679182734"},
    {"name": "Sagor", "number": "8732679347734"},
    {"name": "Amrito", "number": "8732234182734"}
]

inpName = input("Enter Name: ").capitalize()

for person in people:
    if (person["name"] == inpName):
        print(f"Number: {person["number"]}")
        break
else:
    print("Not Found")