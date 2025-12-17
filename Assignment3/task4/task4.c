#include <stdio.h>

int main() {
    // Declare two integer variables named num1 and num2
    int num1 = 15;
    int num2 = 25;

    // Declare two integer pointers named ptr1 and ptr2
    int *ptr1, *ptr2;

    // Assign the address of num1 to ptr1
    ptr1 = &num1;

    // Assign the address of num2 to ptr2
    ptr2 = &num2;

    // Add the values of num1 and num2 using pointer dereferencing
    // Store the result in an integer variable named sum
    int sum = *ptr1 + *ptr2;

    // Print the value of sum
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Sum (calculated using pointers): %d\n", sum);

    return 0;
}
