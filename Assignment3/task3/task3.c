#include <stdio.h>

int main() {
    // Declare an integer variable named count and assign it an initial value
    int count = 10;

    // Declare an integer pointer named pCount
    int *pCount;

    // Assign the address of count to pCount
    pCount = &count;

    printf("Original value of count: %d\n", count);

    // Modify the value of count using the pointer pCount
    // Dereferencing pCount to change the value at that address
    *pCount = 20;

    // Print the updated value of count
    printf("Updated value of count: %d\n", count);

    return 0;
}
