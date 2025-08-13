def sentences(t):
    sentence = 0

    for i in t:
        if (i in [".", "!", "?"]):
            sentence = sentence + 1

    return sentence

def words(t):
    word = 0

    for i in t:
        if (i == " "):
            word = word + 1

    return (word + 1)

def letters(t):
    letter = 0

    for i in t:
        if (i.isalpha() == True):
            letter = letter + 1

    return letter


text = input("Text: ")

countSentences = sentences(text)
countWords = words(text)
countLetters = letters(text)

L = (countLetters * 100) / countWords
S = (countSentences * 100) / countWords

index = round((0.0588 * L) - (0.296 * S) - 15.8)

if (index < 1):
    print("Before Grade 1")
elif (index > 16):
    print("Grade 16+")
else:
    print(f"Grade {index}")
