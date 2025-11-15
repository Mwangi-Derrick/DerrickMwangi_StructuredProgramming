# ✍️ C String Length Calculator

A simple, educational C program that safely reads a string from the user and calculates its length. This project serves as a practical example of secure string handling in C.

## 📝 Description

This program demonstrates how to:
1.  Safely read a line of text from a user without risking a buffer overflow.
2.  Properly handle the trailing newline character (`\n`) that is often included by input functions.
3.  Use the `strlen()` function to determine the length of a string.

The code is heavily commented to explain why certain functions and techniques are used over others (e.g., `fgets` vs. `scanf`).

## ✨ Key Concepts Demonstrated

*   **Safe String Input:** Uses `fgets()` instead of `scanf("%s", ...)` to prevent buffer overflows by limiting the number of characters read.
*   **String as a Character Array:** Illustrates that strings in C are arrays of characters ending with a null terminator (`\0`).
*   **Handling Newline Characters:** Shows how to find and replace the newline character that `fgets` stores in the buffer.
*   **Constants:** Uses `#define` to create a constant for the maximum string size, which makes the code easier to maintain.

## 🛠️ Requirements

*   **GNU Compiler Collection (GCC)** or any standard C compiler.

## 🚀 How to Compile and Run

### 1. Compile

Open your terminal, navigate to this directory, and run the following command:

```bash
gcc main.c -o string_length
```
*(No special libraries are needed for this program.)*

### 2. Run

Execute the compiled program from your terminal.

**On Linux or macOS:**
```bash
./string_length
```

**On Windows:**
```bash
.\string_length.exe
```

### Example Session
```
--- C String Length Calculator ---
Please enter your name (up to 50 characters): Derrick Mwangi

[Echo] Hello, Derrick Mwangi!
----------------------------------
The C compiler considers your string as an array of characters.
The length of the string 'Derrick Mwangi' is: 13 characters.
----------------------------------
```
