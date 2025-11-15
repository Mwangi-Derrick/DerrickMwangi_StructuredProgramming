# 🧮 Simple C Calculator

This is a straightforward, console-based calculator written in C. It's designed as a learning project to demonstrate fundamental C programming concepts, including functions, structs, and user input handling.

## ✨ Features

*   Performs basic arithmetic operations: addition, subtraction, multiplication, and division.
*   Calculates the remainder (modulo) for floating-point numbers.
*   Accepts floating-point numbers (e.g., `10.5`, `3.14`) as input.
*   Provides clear prompts for user input and displays the result.

## 🛠️ Requirements

To compile and run this project, you will need:
*   The **GNU Compiler Collection (GCC)**. This is standard on most Linux systems and can be installed on macOS (via Homebrew) or Windows (via [MinGW-w64](https://www.mingw-w64.org/)).

## 🚀 How to Compile and Run

Follow these steps in your terminal or command prompt.

### 1. Compile the Code

Navigate to the `calculator_app` directory and run the following command to compile the program:

```bash
gcc main.c -o calculator -lm
```

**Command Breakdown:**
*   `gcc main.c`: Tells the compiler to process the `main.c` source file.
*   `-o calculator`: Creates an executable file named `calculator` (or `calculator.exe` on Windows).
*   `-lm`: This is important! It links the C math library. We need this because our code uses the `fmod()` function to calculate remainders for floating-point numbers.

### 2. Run the Program

Once compiled, you can run the executable.

**On Linux or macOS:**
```bash
./calculator
```

**On Windows:**
```bash
.\calculator.exe
```

---

## 📝 Example Usage

Here is what a typical session with the calculator looks like in the terminal:

```
Welcome to Simple C Calculator!
Enter the first number: 20.5
Enter operator (+, -, *, /, %): *
Enter the second number: 2

Calculation: 20.50 * 2.00 = 41.00
```
