#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    // Store the address of num in the pointer ptr
    ptr = &num;

    // Print Value of num
    printf("Value of num: %d\n", num);

    // Print Value stored in ptr (address of num)
    // %p is the format specifier for pointers (addresses)
    printf("Value stored in ptr (address of num): %p\n", (void*)ptr);

    // Print Address of num
    printf("Address of num: %p\n", (void*)&num);

    // Print Value accessed using *ptr (dereferenced value)
    printf("Value accessed using *ptr (dereferenced value): %d\n", *ptr);

    return 0;
}
