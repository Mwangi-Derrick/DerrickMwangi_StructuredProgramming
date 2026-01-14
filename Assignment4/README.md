# Assignment 4: Arrays

This directory contains 8 programming tasks focusing on array operations in C.

## Directory Structure

Each task is in its own subdirectory with a single C source file:

```
Assignment4/
├── task1/
│   └── task1.c       (Array Reverse Display)
├── task2/
│   └── task2.c       (Array Sum Calculation)
├── task3/
│   └── task3.c       (Print Unique Elements)
├── task4/
│   └── task4.c       (Find Maximum & Minimum)
├── task5/
│   └── task5.c       (Sort Array Ascending)
├── task6/
│   └── task6.c       (Insert in Unsorted Array)
├── task7/
│   └── task7.c       (Circular Data Logger)
└── task8/
    └── task8.c       (2D Array Traversal)
```

## Compilation

### Compile All Tasks

Run the provided batch script:
```cmd
compile_all.bat
```

### Compile Individual Tasks

Navigate to each task directory and compile:
```cmd
cd task1
gcc task1.c -o task1.exe
task1.exe
```

## Task Descriptions

### Task 1: Array Reverse Display
Reads n numbers into an array and displays them in reverse order.

**Test Input:**
```
3
2
5
7
```

**Expected Output:**
```
The values store into the array are : 2 5 7
The values store into the array in reverse are : 7 5 2
```

### Task 2: Array Sum Calculation
Calculates and displays the sum of all elements in an array.

**Test Input:**
```
3
2
5
8
```

**Expected Output:**
```
Sum of all elements stored in the array is : 15
```

### Task 3: Print Unique Elements
Identifies and prints only unique elements from an array.

**Test Input:**
```
4
3
2
2
5
```

**Expected Output:**
```
The unique elements found in the array are: 3 5
```

### Task 4: Find Maximum & Minimum
Finds and displays the maximum and minimum values in an array.

**Test Input:**
```
3
45
25
21
```

**Expected Output:**
```
Maximum element is : 45
Minimum element is : 21
```

### Task 5: Sort Array Ascending
Sorts array elements in ascending order using bubble sort.

**Test Input:**
```
5
2
7
4
5
9
```

**Expected Output:**
```
Elements of array in sorted ascending order: 2 4 5 7 9
```

### Task 6: Insert in Unsorted Array
Inserts a value at a specified position in an array.

**Test Input:**
```
4
1
8
7
10
5
2
```

**Expected Output:**
```
The current list of the array : 1 8 7 10
After Insert the element the new list is : 1 5 8 7 10
```

### Task 7: Circular Data Logger
Implements a circular buffer that overwrites oldest data when full.

**Interactive Menu:**
- Insert new sample
- Print all samples (chronological order)
- Exit

**Example Workflow:**
```
Buffer Size: 10
Insert: 10, 12, 14, 15, 13 → [10 12 14 15 13]
When full and new values added, oldest values are overwritten.
```

### Task 8: 2D Array Traversal
Creates and traverses a 6x4 2D array displaying all elements.

**Output:**
Displays all 24 elements with row labels and indices.

## Notes

- All programs follow the exact format specified in the assignment
- Input prompts match the expected format
- Clear comments explain the logic in each program
- Programs use standard C library functions
