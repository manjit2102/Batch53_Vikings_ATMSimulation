# ATM Simulation

## Problem Statement

Develop a basic ATM simulation program in C that provides essential banking operations for a single demonstration account.

## Team Details

**Team Name:** Y Kings  
**Batch:** 53

**Team Members:**
1. Manjit
2. Raunak Rai
3. Saksham

## Objectives

- To simulate basic ATM operations using C programming.
- To check the current account balance.
- To deposit money into the account.
- To withdraw money from the account.
- To handle invalid transactions.
- To update the balance after each transaction.

## Features

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
5. Invalid amount handling
6. Insufficient balance handling

## Algorithm

1. Start the program.
2. Set the initial balance to Rs. 5000.
3. Display the ATM menu.
4. Ask the user to enter a choice.
5. If the choice is 1, display the current balance.
6. If the choice is 2, ask for the deposit amount.
7. If the deposit amount is valid, add it to the balance.
8. If the choice is 3, ask for the withdrawal amount.
9. Check whether sufficient balance is available.
10. If sufficient balance is available, subtract the amount from the balance.
11. If the withdrawal amount is greater than the available balance, display an insufficient balance message.
12. If the choice is 4, exit the program.
13. For any other choice, display an invalid choice message.
14. Repeat the menu until the user selects Exit.
15. Stop.

## C Programming Concepts Used

- Variables and Data Types
- Input and Output
- Operators
- Conditional Statements
- Switch Case
- Do-While Loop
- Functions

## How to Compile and Run

Compile the program:

`gcc atm.c -o atm`

Run the program:

`./atm`

## Sample Test Cases

### Test Case 1: Check Balance

**Input:**

`1`

**Expected Output:**

`Your current balance is: Rs. 5000.00`

### Test Case 2: Deposit Money

**Input:**

`2`  
`1000`

**Expected Output:**

`Money deposited successfully.`  
`New balance: Rs. 6000.00`

### Test Case 3: Withdraw Money

**Input:**

`3`  
`500`

**Expected Output:**

`Money withdrawn successfully.`

### Test Case 4: Insufficient Balance

**Input:**

`3`  
`10000`

**Expected Output:**

`Insufficient balance.`

### Test Case 5: Invalid Amount

**Input:**

`2`  
`-100`

**Expected Output:**

`Invalid amount.`

### Test Case 6: Invalid Menu Choice

**Input:**

`7`

**Expected Output:**

`Invalid choice. Please try again.`

### Test Case 7: Exit

**Input:**

`4`

**Expected Output:**

`Thank you for using the ATM.`

## Conclusion

The ATM Simulation program successfully performs basic banking operations such as checking balance, depositing money, and withdrawing money. It also handles invalid amounts and insufficient balance. The program provides a simple menu-driven interface and updates the account balance after each successful transaction.
