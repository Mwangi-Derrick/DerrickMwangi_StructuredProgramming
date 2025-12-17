#include <stdio.h>

// Write a function named swapNumbers() that accepts two integer pointers as parameters
void swapNumbers(int *x, int *y) {
    // Swaps the values of a and b using dereferencing
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // Declare two integer variables named a and b in main()
    int a = 5;
    int b = 10;

    // Print the values of a and b before calling the function
    printf("Before Check: a = %d, b = %d\n", a, b);

    // Call swapNumbers() by passing the addresses of a and b
    swapNumbers(&a, &b);

    // Print the values of a and b after swapping
    printf("After Check: a = %d, b = %d\n", a, b);

    return 0;
}
