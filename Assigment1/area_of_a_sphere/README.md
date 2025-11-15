# 🌐 Sphere Surface Area Calculator

A simple command-line program written in C that calculates the surface area of a sphere based on a user-provided radius.

## 📝 Description

This program prompts the user to enter the radius of a sphere. It then uses the standard mathematical formula to compute the surface area and displays the result formatted to two decimal places.

The formula used is: **A = 4 * π * r²**
*   **A** is the surface area.
*   **π** (Pi) is approximated as `22/7`.
*   **r** is the radius.

## 🛠️ Requirements

*   **GNU Compiler Collection (GCC)** or any standard C compiler.

## 🚀 How to Compile and Run

### 1. Compile

Open your terminal, navigate to this directory, and run the following command:

```bash
gcc main.c -o sphere_area -lm
```

**Note:** The `-lm` flag is essential. It links the C math library, which is required for the `pow()` function used to square the radius.

### 2. Run

Execute the compiled program from your terminal.

**On Linux or macOS:**
```bash
./sphere_area
```

**On Windows:**
```bash
.\sphere_area.exe
```

### Example Session
```
Enter the radius of the sphere: 10
The surface area of the sphere with radius 10.00 is: 1257.14
```
