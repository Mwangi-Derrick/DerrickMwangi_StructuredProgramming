#include <stdio.h>
#include "atm_utils.h"
//todo: handle balance display and withdrawal/deposit functions

float checkBalance(float *balance){//should pass pointer to see updated balance
    printf("Your current balance is: $%.2f\n", *balance);
    return (float)(*balance);
}
float deposit(float *balance, float amount){//should pass pointer to balance variable to update it
    *balance += amount;
    printf("You have deposited: $%.2f\n", amount);//should show deposited amount in precision of 2 decimal places
    printf("Your new balance is: $%.2f\n", *balance);
    return (float)(*balance);
}
float withdraw(float *balance, float amount){//should pass pointer to balance variable to update it
    if (amount > (float)(*balance)){//amount exceeds balance..so it ust be positive
        printf("Insufficient funds. Your current balance is: $%.2f\n", *balance);
    } else {
        *balance -= amount;
        printf("You have withdrawn: $%.2f\n", amount);//show withdrawn amount in precision of 2 decimal places
        printf("Your new balance is: $%.2f\n", *balance);
    }
    return (float)(*balance);
}
