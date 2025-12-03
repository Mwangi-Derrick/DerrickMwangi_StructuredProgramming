#include <stdio.h>
#include "login.h"
#include <stdbool.h>
#include "atm_utils.h"

void showOptions() {
    printf("\nWelcome to the ATM System!\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Select an option: ");
}

int main() {
    int userInputPin;
    printf("Enter your PIN: ");
    scanf("%d", &userInputPin);

    if (login(userInputPin)) {
        int option;
        float balance = 1000.00; // Initial balance

        do {
            showOptions();
            scanf("%d", &option);

            switch (option) {
                case 1:
                    checkBalance(&balance);
                    printf("Your current balance is: $%.2f\n", balance);
                    break;
                case 2:
                    {
                        float depositAmount;
                        printf("Enter amount to deposit: ");
                        scanf("%f", &depositAmount);
                        deposit(&balance, depositAmount);
                        printf("You deposited: $%.2f\n", depositAmount);
                        printf("Your new balance is: $%.2f\n", balance);
                    }
                    break;
                case 3:
                    {
                        float withdrawAmount;
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &withdrawAmount);
                        withdraw(&balance, withdrawAmount);
                        printf("You widthdrawn: $%.2f\n", withdrawAmount);
                        printf("Your new balance is: $%.2f\n", balance);
                    }
                    break;
                case 4:
                    printf("Exiting the ATM System. Have a nice day!\n");
                    break;
                default:
                    printf("Invalid option selected.\n");
            }
        } while (option != 4);
    }

    printf("Thank you for using the ATM System. Goodbye!\n");
    return 0;
}