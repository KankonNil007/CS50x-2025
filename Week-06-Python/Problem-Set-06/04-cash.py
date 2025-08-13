import cs50
import math

while True:
    balance = cs50.get_float("Change: ")
    if (balance >= 0.01):
        break

change = 0
balance = round(balance, 2)

quarters = 0.25
while (balance >= quarters):
    change = change + 1
    balance = balance - quarters
    balance = round(balance, 2)

dimes = 0.10
while (balance >= dimes):
    change = change + 1
    balance = balance - dimes
    balance = round(balance, 2)

nickels = 0.05
while (balance >= nickels):
    change = change + 1
    balance = balance - nickels
    balance = round(balance, 2)

change = change + round(balance * 100)

print(change)