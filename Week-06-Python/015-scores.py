import cs50

scores = []

for i in range(3):
    score = cs50.get_int("Input: ")
    scores.append(score)

average = sum(scores) / len(scores)

print(f"Average: {average:.2f}")