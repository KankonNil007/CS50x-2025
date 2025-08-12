from cs50 import get_int

x = get_int("X: ")
y = get_int("Y: ")

if (x > y):
    print("X is bigger than Y")
elif (x < y):
    print("X is less than Y")
else:
    print("X is equal to Y")