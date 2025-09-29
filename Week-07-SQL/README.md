# 🗄️ Week 7: SQL - CS50x 2025

## 🌟 Overview
This folder contains my solutions for Week 7 of Harvard's CS50x 2025 course, focusing on SQL and database management. Week 7 introduces Structured Query Language (SQL) for creating, querying, and manipulating relational databases using SQLite. These exercises enhance my ability to design efficient database schemas and write complex queries to extract insights from data. 🚀

## 🧩 Problem Sets
Below are the problem sets and labs included in this folder, with brief descriptions:

- **Lab 7: Movies**: A lab to practice SQL queries by analyzing a movies database, answering questions about films, actors, and ratings using SELECT statements with JOINs, aggregates, and subqueries. 🎬
- **Problem Set 7**:
  - **Movies**: Extend the movies lab by writing additional SQL queries to explore movie data, including ratings, genres, and release years. 📽️
  - **Fiftyville**: A detective-style investigation using SQL to solve a crime by querying a database of logs, interviews, and transactions to identify culprits and accomplices. 🕵️‍♂️

## 📚 Learning Objectives
Through these assignments, I aimed to master the following concepts:
- **SQL Basics**: Creating tables, inserting data, and using data types like INTEGER, TEXT, and REAL.
- **Querying Data**: Writing SELECT statements with WHERE, ORDER BY, LIMIT, and DISTINCT clauses.
- **Advanced Queries**: Using JOINs to combine tables, aggregate functions (COUNT, AVG, MAX), and subqueries for complex analysis.
- **Database Design**: Normalizing data with primary keys, foreign keys, indexes, and constraints for efficient storage and retrieval.
- **Transactions**: Managing database changes with INSERT, UPDATE, DELETE, and handling atomic operations.
- **Tools**: Using SQLite commands, CS50's SQL library in Python, and visualizing data with tools like DB Browser for SQLite.

## 🏃‍♂️ How to Run the Code
To run the programs:
1. Ensure Python 3 and SQLite are installed (`sqlite3 --version`).
2. Clone the repository: `git clone https://github.com/KankonNil007/CS50x-2025.git`
3. Navigate to the folder: `cd CS50x-2025/Week-07-SQL`
4. For SQL files: Open in SQLite (`sqlite3 database.db`) and run `.read queries.sql` or execute queries directly.
5. For Python-integrated scripts: `python3 script.py` (e.g., using CS50's SQL module).
6. Use CS50 tools like `check50` for testing (e.g., `check50 cs50/problems/2025/x/pset7`) and submit via `submit50`.

## 💭 Reflections
Week 7 was a fascinating dive into the world of databases! 🥳 Learning SQL felt like unlocking a superpower for handling real-world data—querying the Fiftyville database to crack a mystery case was incredibly engaging and taught me the power of relational data. Mastering JOINs and aggregates boosted my ability to think logically about data relationships. These exercises made me appreciate how databases power everything from apps to analytics.

## 📚 Resources
- 📺 [Lecture Video](https://video.cs50.io/VF21g3sTw5s)
- 📝 [Lecture Notes](https://cs50.harvard.edu/x/2025/notes/7/)
- 📊 [Slides (PDF)](https://cdn.cs50.net/2024/fall/lectures/7/lecture7.pdf)
- 💾 [Source Code Examples](https://cdn.cs50.net/2024/fall/lectures/7/src7.zip)

- `There is no movies.db file in the 2nd Problem Set. Here is the externel Link to [movies.db](https://drive.google.com/file/d/1zfDFwFnrs4FtV9k2vX8GLIe7OGq1eUS8/view?usp=drive_link)`

## 📂 Directory Structure
Here’s how the repository is organized:
```
Week-07-SQL/
├── output/
│   ├── 01-movies
│   ├── 02-fiftyville
├── Problem-Set-07/
│   ├── output/
│   │   ├── 01-movies
│   │   ├── 02-fiftyville
│   ├── movies/
│   │   ├── movies.db
│   │   ├── queries.sql
│   ├── fiftyville/
│   │   ├── fiftyville.db
│   │   ├── investigation.sql
├── Exercises/
│   ├── output/
│   │   ├── 01-movies
│   ├── movies.py
└── README.md
```

Thanks for checking out my CS50x project! Looking forward to JavaScript in Week 8! 💻
