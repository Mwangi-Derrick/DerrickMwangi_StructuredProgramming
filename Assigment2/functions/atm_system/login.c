#include <stdio.h>
#include "login.h"
#include <stdbool.h>

bool login(int userInputPin) {
    int correctPIN = 1234;
    int attempts = 1;

    while (userInputPin != correctPIN && attempts < 3) {
        printf("Incorrect PIN. Try again:\n");
        scanf("%d", &userInputPin);
        attempts++;
    }

    if (userInputPin == correctPIN) {
        printf("PIN Accepted\n");
        return true;
    } else {
        printf("Too many incorrect attempts. System locked\n");
        return false;
    }
}
