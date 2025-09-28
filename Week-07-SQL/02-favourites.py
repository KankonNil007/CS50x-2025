from cs50 import SQL

db = SQL("sqlite:///favourites.db")

favourite = input("Input Language: ")

db.execute("BEGIN TRANSACTION")
rows = db.execute("SELECT COUNT(*) as n FROM favourites WHERE language = ?", favourite)
row = rows[0]
print(f"{favourite}: {row["n"]}")
db.execute("COMMIT")

