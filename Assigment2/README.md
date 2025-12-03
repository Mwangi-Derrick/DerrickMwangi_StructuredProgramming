# ATM System in C

This project is a simple ATM (Automated Teller Machine) system implemented in the C programming language. It demonstrates the use of functions, headers, and basic input/output operations.

## Features

*   **PIN Verification:** Users must enter a correct PIN to access the system. The system locks after three incorrect attempts.
*   **Balance Inquiry:** Users can check their current account balance.
*   **Deposit:** Users can deposit a specified amount into their account.
*   **Withdrawal:** Users can withdraw a specified amount from their account, provided they have sufficient funds.

## How to Compile and Run

To compile and run this project, you will need a C compiler (like GCC).

1.  **Navigate to the project directory:**
    ```bash
    cd Assigment2/functions/atm_system
    ```

2.  **Compile the source files:**
    ```bash
    gcc main.c login.c atm_utils.c -o atm_system
    ```

3.  **Run the executable:**
    ```bash
    ./atm_system
    ```

## File Structure

*   `main.c`: The main entry point of the application. It handles the user menu and calls the appropriate functions based on user input.
*   `login.h` and `login.c`: These files contain the logic for user authentication. The `login` function verifies the user's PIN.
*   `atm_utils.h` and `atm_utils.c`: These files provide the core ATM functionalities:
    *   `checkBalance()`: Displays the current balance.
    *   `deposit()`: Adds a specified amount to the balance.
    *   `withdraw()`: Subtracts a specified amount from the balance.
