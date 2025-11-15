#include <stdio.h>
#include <string.h> // Essential for the strlen() function

// Define a constant for the maximum size of the string. 
// This is a C best practice to prevent buffer overflows.
#define MAX_NAME_LENGTH 50 

// Function to safely read a string from the user
// Void means it returns nothing
void read_user_string(char *buffer, int max_size); 

// Main Function (Control Flow)
int main() {
    // A string is a character array (char[]). 
    // We allocate 50 characters, plus 1 extra for the null terminator ('\0').
    char userName[MAX_NAME_LENGTH + 1]; 
    int length;

    printf("--- C String Length Calculator ---\n");
    
    // Ask the user to enter a string (like their name).
    printf("Please enter your name (up to %d characters): ", MAX_NAME_LENGTH);

    // Call the dedicated function for safe input
    read_user_string(userName, MAX_NAME_LENGTH); 

    // Print the string back to the user.
    printf("\n[Echo] Hello, %s!\n", userName);

    // Find and display the length of the string.
    // The strlen() function returns the number of characters BEFORE the null terminator.
    length = (int)strlen(userName);

    printf("----------------------------------\n");
    printf("The C compiler considers your string as an array of characters.\n");
    printf("The length of the string '%s' is: %d characters.\n", userName, length);
    printf("----------------------------------\n");

    return 0;
}


// --- Function Definitions ---

/**
 * @brief Reads a string safely from stdin, preventing buffer overflow.
 * * @param buffer The character array (string) to store the input.
 * @param max_size The maximum number of characters allowed.
 */
void read_user_string(char *buffer, int max_size) {
    // fgets is preferred over scanf("%s") because it takes the maximum size,
    // protecting the buffer from overflow if the user inputs a very long string.
    if (fgets(buffer, max_size + 1, stdin) == NULL) {
        // Handle input error if needed
        return;
    }

    // fgets includes the newline character ('\n') in the buffer, 
    // which can interfere with the length calculation and printout.
    // We must manually replace it with the null terminator ('\0').
    size_t length = strlen(buffer);
    if (length > 0 && buffer[length - 1] == '\n') {
        buffer[length - 1] = '\0';
    }
}