#include <stdio.h>

// One that increments a number using pass by value
void incrementByValue(int num) {
    num = num + 1;
    printf("Inside incrementByValue: %d\n", num);
}

// One that increments a number using pass by reference
void incrementByReference(int *num) {
    *num = *num + 1;
    printf("Inside incrementByReference: %d\n", *num);
}

int main() {
    int value = 10;

    printf("Initial Value: %d\n\n", value);

    // Call both functions from main() with the same variable
    // Pass by value
    printf("Calling incrementByValue...\n");
    incrementByValue(value);
    printf("Value after incrementByValue: %d\n\n", value); 
    // Expected Result: Pass by value -> value remains unchanged

    // Pass by reference
    printf("Calling incrementByReference...\n");
    incrementByReference(&value);
    printf("Value after incrementByReference: %d\n", value);
    // Expected Result: Pass by reference -> value gets incremented

    return 0;
}
