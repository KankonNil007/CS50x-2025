import cs50

# Vertical Alignment
while True:
    n = int(input("Height: "))
    if (n > 0):
        break

for i in range(n):
    print("#")

print()

# Horizental Alignment

print("#" * n) 
print()

# Nested Alignment

for i in range(n):
    print("#" * n)