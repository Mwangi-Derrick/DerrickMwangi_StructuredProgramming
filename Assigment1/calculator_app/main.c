#include <stdio.h>
#include <string.h> // Essential for strcmp()(string validation)
#include <math.h> // Required for fmod() for floating point remainder

typedef struct data {
float num1;
float num2;
double result;
char operand;
}CalculatorData;


//function expresstions
float add (float num1, float num2);
float substract (float num1, float num2);
float multiply (float num1, float num2);
float divide (float num1, float num2);
float float_remainder (float num1, float num2);

//function definitions
float add(float num1, float num2){
    return num1 + num2;
};
float substract(float num1, float num2){
  return num1 - num2;
};
float multiply(float num1, float num2){
    return num1 * num2;
}
float divide(float num1, float num2){
    return num1 / num2;
}
float float_remainder(float num1, float num2){
    return fmod(num1, num2);
}

void calculate (CalculatorData *data){
switch (data->operand) {
        case '+':
            data->result = add(data->num1, data->num2);
            break;
        case '-':
            data->result = substract(data->num1, data->num2);
            break;
        case '*':
            data->result = multiply(data->num1, data->num2);
            break;
        case '/':
            // Basic division by zero check
            if (data->num2 == 0.0f) {
                printf("Error: Division by zero!\n");
                return;
            }
            data->result = divide(data->num1, data->num2);
            break;
        case '%':
            // Modulo check
            if (data->num2 == 0.0f) {
                printf("Error: Modulo by zero!\n");
                return;
            }
            data->result = float_remainder(data->num1, data->num2);
            break;
        default:
            // Non-valid operator error
            printf("Error: Invalid operator entered: %c\n", data->operand);
            return; 
    }

    // Calculator
    printf("\nCalculation: %.2f %c %.2f = %.2f\n", 
           data->num1, 
           data->operand, 
           data->num2, 
           data->result);
    }




int main(){
// Instantiate the CalculatorData struct
CalculatorData data;
printf("Welcome to Simple C Calculator!\n");
printf("Enter the first number: ");
scanf("%f", &data.num1); // Read float input
printf("Enter operator (+, -, *, /, %%): ");
// Note the space before %c to consume any lingering newline character
scanf(" %c", &data.operand); // Read character input form the standard input
printf("Enter the second number: ");
scanf("%f", &data.num2);// read float input
calculate(&data);
   return 0;//exit code 0 means success
}