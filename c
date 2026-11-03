# 🐍 Python Project – Basics, Logic, Problem-Solving & Data Analysis

*A hands-on Python project demonstrating programming fundamentals, decision making, loops, practical problem-solving, and data analysis with Pandas.*

## 🔍 Overview

This repository contains my Python work from Week 6 of the Data Technician programme (Day 1, Day 2 and Day 4).

Across five Google Colab notebooks and a coding challenge, I practised core Python concepts including variables, user input, type conversion, conditional statements and loops.

I applied these to realistic, scenario-based tasks such as calculators, converters, number checkers and pattern printing.

I then moved into data analysis with Pandas, using DataFrames to explore, filter, sort and clean real datasets.

---

## 🚀 Skills Demonstrated

### ✔️ Python Fundamentals

* Variables
* `print()` output and `input()` user input
* Type casting with `int()` and `float()`
* Arithmetic operations
* Floor division (`//`) and modulus (`%`)

### ✔️ Control Flow

* `if`, `elif` and `else` statements
* Boolean logic and comparisons (`and`, `==`, `!=`, `<`)
* Using modulus to test divisibility
* `for` loops with `range()`
* Nested `for` loops
* Loop control (`break` and `for ... else`)

### ✔️ Problem-Solving & Logic

* FizzBuzz coding challenge
* Loop-based calculations (sum of numbers, factorial)
* Digit manipulation (adding and reversing digits)
* Prime number checking
* Pattern printing
* Input checking

### ✔️ Data Manipulation & Analysis (Pandas)

* Creating DataFrames from lists, dictionaries and lists of lists
* Importing CSV files with `pd.read_csv()`
* Selecting columns and adding calculated columns
* Renaming columns and setting the index
* Filtering rows with Boolean masks (`&` and `|`)
* Sorting with `sort_values()` and finding top values with `nlargest()` / `nsmallest()`
* Descriptive statistics (`describe()`, `mean()`, `median()`, `value_counts()`, `corr()`)
* Finding missing values with `isna()` / `isnull()`
* Cleaning data with `dropna()` and `drop()`
* Making safe copies with `.copy()`
* Exporting data to CSV and Excel

### ✔️ Real-World Scenarios

* Reception desk greeting using a visitor's name and age
* Tile area and cost calculator
* Temperature and distance converters
* "Lucky number" and "secret code" digit tools
* Access code checker
* Fitness tracker step total
* Shopping basket and product sales revenue DataFrames
* Car fuel economy analysis (mpg dataset)
* Missing value analysis (penguins dataset)

---

## 📁 Repository Contents

* Python Day 1 notebook (Google Colab)
* Python Day 2 notebook (Google Colab)
* Pandas DataFrames notebooks 1, 2 and 3 (Google Colab)
* Screenshots of code and output

---

## 🧠 Key Learning Outcomes

Through this Python project, I strengthened my ability to:

* Write clean, readable Python code
* Break down problems using logic and flow control
* Build programs that interact with the user
* Convert and validate input data
* Use loops to automate repeated calculations
* Apply Python fundamentals to realistic, scenario-based tasks
* Load, explore, filter and sort datasets with Pandas
* Create new columns from existing data
* Identify and clean missing values
* Summarise data using descriptive statistics

---

## 🛠 Tools & Technologies Used

* Python 3
* Pandas
* Google Colab
* Jupyter Notebook (.ipynb)

---

## 📗 Exercises Covered

### Day 1 Colab Notebook

* Greeting with name and age (`input()`, `int()`)
* Tile area and cost calculation
* Celsius to Fahrenheit conversion
* Miles and kilometres conversion
* Adding the digits of a 3-digit number
* Reversing a 4-digit number

### Day 2 Colab Notebook

* Access code checker
* Divisibility by 3 and 7
* Sum of numbers from 1 to n
* Prime number checker
* Factorial calculator
* Number staircase pattern

### Day 4 Pandas DataFrames 1 Notebook

* Creating DataFrames from lists and dictionaries
* Selecting columns and descriptive statistics
* Adding and renaming columns
* Product sales exercise (units sold and total revenue)
* Exporting data to CSV and Excel

### Day 4 Pandas DataFrames 2 Notebook

* Importing the mpg (car fuel economy) dataset
* Calculated columns (average mileage and weighted fuel economy)
* Filtering with Boolean masks, `&` and `|`
* Sorting and top 5 / bottom 5 with `nlargest()` and `nsmallest()`
* Correlation between cylinders, engine size and mileage
* Counting automatic cars and the percentage of subcompacts

### Day 4 Pandas DataFrames 3 Notebook

* Importing the penguins dataset
* Counting missing values by column
* Proportion of missing values by row
* Removing missing values with `dropna()`

---

## 📓 Notebooks

* [Python Day 1 Notebook](https://colab.research.google.com/drive/1D4EEP6gzp_Wvzt3OeM9XJcFUc1omicm6?usp=sharing)
* [Python Day 2 Notebook](https://colab.research.google.com/drive/1atLdsA7s3oE-ePVHB6Jly3_bs5mzRBFp?usp=sharing#scrollTo=WYecctQo3gcl)
* [Pandas DataFrames 1 Notebook](https://colab.research.google.com/drive/1vPAzk4sC1O_DdOxNHowz6lXFbP-owrzk?usp=sharing)
* [Pandas DataFrames 2 Notebook](https://colab.research.google.com/drive/12X6uEHB-_cEoA3JCDGWIHLJ8sYCBFTRx?usp=sharing)
* [Pandas DataFrames 3 Notebook](https://colab.research.google.com/drive/1fBz8Y-QwGr_54flYt4_V-Om8t-5Kq2_7?usp=sharing)

---

## 📸 Screenshots

### Reception Greeting

![Reception Greeting](images/day1-greeting.png)

Takes a visitor's name and age with `input()`, converts the age with `int()` and prints a personalised greeting.

### Tile Area & Cost Calculator

![Tile Calculator](images/day1-tile-calculator.png)

Converts the kitchen length and width with `float()`, then calculates the area and the total cost at £12 per square metre.

### Lucky Number

![Lucky Number](images/day1-lucky-number.png)

Splits a 3-digit number into hundreds, tens and units using `//` and `%`, then adds the digits together.

### Divisibility Checker

![Divisibility Checker](images/day2-divisibility.png)

Uses `if / else` and the modulus operator to check whether a number is divisible by both 3 and 7.

### Prime Number Checker

![Prime Number Checker](images/day2-prime-number.png)

A `for` loop tests each possible divisor, using `break` to stop as soon as one is found.

### Number Staircase

![Number Staircase](images/day2-staircase-pattern.png)

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

---

## ✨ About the Author

**Hudefe Bare**

Data Technician bootcamp learner building practical skills in Python, data and analytics through hands-on exercises.
