# 🐍 Python Project – Basics, Logic & Problem-Solving

*A hands-on Python project demonstrating programming fundamentals, decision making, loops and practical problem-solving.*

## 🔍 Overview

This repository contains my Python work from Week 6 of the Data Technician programme (Day 1, Day 2 and Day 4).

Across five Google Colab notebooks and a coding challenge, I practised core Python concepts including variables, user input, type conversion, conditional statements and loops.

I applied these to practical tasks such as calculators, converters, number checkers and pattern printing.

I then moved into data analysis with Pandas, using DataFrames to explore, filter, sort and clean datasets.

## 🚀 Skills Demonstrated

### ✔️ Python Fundamentals
- Variables and data types
- `print()` and `input()`
- Type conversion using `int()` and `float()`
- Arithmetic operations and modulus (`%`)

### ✔️ Control Flow
- `if`, `elif` and `else` statements
- Boolean logic and comparisons
- `for` loops and nested loops
- Loop control using `break`

### ✔️ Problem-Solving & Logic
- Loop-based calculations (sum and factorial)
- Digit manipulation
- Prime number checking
- Pattern printing
- Input checking

### ✔️ Data Manipulation & Analysis (Pandas)
- Creating DataFrames and importing CSV files
- Selecting columns and creating calculated columns
- Filtering and sorting data
- Descriptive statistics
- Identifying and cleaning missing values
- Exporting data to CSV and Excel

### ✔️ Real-World Scenarios
- Reception desk greeting
- Tile area and cost calculator
- Temperature and distance converters
- Digit manipulation tools
- Access code checker
- Fitness tracker step total

## 📁 Repository Contents

- Python Day 1 notebook
- Python Day 2 notebook
- Pandas DataFrames notebooks 1, 2 and 3
- Screenshots of code and output

## 🧠 Key Learning Outcomes

Through this Python project, I strengthened my ability to:

- Write clean, readable Python code
- Break down problems using logic and flow control
- Build programs that interact with users
- Use loops to automate calculations
- Load, explore, filter and sort datasets with Pandas
- Create calculated columns and clean missing data
- Summarise data using descriptive statistics

## 🛠 Tools & Technologies Used

- Python 3
- Google Colab
- Jupyter Notebook
- Pandas

## 📗 Exercises Covered

### Day 1 Colab Notebook
- Greeting with name and age
- Tile area and cost calculation
- Celsius to Fahrenheit conversion
- Miles and kilometres conversion
- Adding and reversing digits

### Day 2 Colab Notebook
- Access code checker
- Divisibility by 3 and 7
- Sum of numbers from 1 to n
- Prime number checker
- Factorial calculator
- Number staircase pattern

### Day 4 Pandas DataFrames 1
- Creating DataFrames from lists and dictionaries
- Selecting columns and descriptive statistics
- Adding and renaming columns
- Product sales analysis
- Exporting data to CSV and Excel

### Day 4 Pandas DataFrames 2
- Importing the mpg dataset
- Creating calculated columns
- Filtering and sorting data
- Finding top and bottom values
- Analysing fuel economy and vehicle categories

### Day 4 Pandas DataFrames 3
- Importing the penguins dataset
- Identifying missing values
- Calculating missing value proportions
- Removing missing values with `dropna()`

## 📸 Screenshots

### Reception Greeting

<img width="1143" height="187" alt="Screenshot 2026-11-03 at 22 44 23" src="https://github.com/user-attachments/assets/6b929ca7-feb2-4d35-ad81-7cdc2008b6cb" />

Takes a visitor's name and age with `input()`, converts the age with `int()` and prints a personalised greeting.

### Tile Area & Cost Calculator

<img width="545" height="292" alt="Screenshot 2026-11-03 at 22 50 17" src="https://github.com/user-attachments/assets/841c4eb6-3ea2-43a4-85b1-db861433249d" />

Converts the kitchen length and width with `float()`, then calculates the area and the total cost at £12 per square metre.

### Lucky Number

<img width="462" height="239" alt="Screenshot 2026-11-03 at 22 55 10" src="https://github.com/user-attachments/assets/07ec1841-2532-4582-8f0d-99ea27941233" />

Splits a 3-digit number into hundreds, tens and units using `//` and `%`, then adds the digits together.

### Divisibility Checker

<img width="519" height="197" alt="Screenshot 2026-11-03 at 22 56 11" src="https://github.com/user-attachments/assets/456a0db5-89f1-44bf-9c07-ac26d1ab5ecb" />

Uses `if / else` and the modulus operator to check whether a number is divisible by both 3 and 7.

### Prime Number Checker

<img width="435" height="293" alt="Screenshot 2026-11-03 at 22 57 11" src="https://github.com/user-attachments/assets/59357fdf-5966-48ec-9147-68a745cf72e0" />

A `for` loop tests each possible divisor, using `break` to stop as soon as one is found.

### Number Staircase

<img width="435" height="293" alt="Screenshot 2026-11-03 at 22 57 11" src="https://github.com/user-attachments/assets/9b1731c1-1c7a-410e-b930-b78d50e65bba" />

Nested `for` loops print a staircase pattern, with each row adding one more number.

### Creating a DataFrame

![Creating a DataFrame](images/pandas-dataframe-creation.png)

Builds a shopping basket DataFrame from a list of dictionaries, where each dictionary becomes a row.

### Descriptive Statistics

![Descriptive Statistics](images/pandas-describe.png)

Uses `describe()` on the price column to show the count, mean, standard deviation, quartiles, minimum and maximum.

### Adding a Calculated Column

![Adding a Calculated Column](images/pandas-new-column.png)

Imports the mpg dataset and creates an `average_mileage` column by averaging city and highway miles across each row.

### Boolean Columns & Percentages

![Boolean Columns and Percentages](images/pandas-boolean-counts.png)

Counts automatic vehicles and calculates what percentage of the 234 cars are subcompacts.

### Weighted Average Column

![Weighted Average Column](images/pandas-fuel-economy.png)

Creates a `fuel_economy` column weighting city mileage at 55% and highway mileage at 45%.

### Missing Values

![Missing Values](images/pandas-missing-values.png)

Reads the penguins dataset and counts the missing values in each column using `isnull().sum()`.


## ✨ About the Author

**Hudefe Bare**

Data Technician bootcamp learner building practical skills in Python, data and analytics through hands-on exercises.


