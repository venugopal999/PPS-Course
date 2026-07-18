
// Program, which takes two integer operands and one operator from the user, performs the operation and then prints the result. 
//(hint: Consider the operators +,-,*, /, % and use Switch Statement).
// Objective: Demonstrate usage of switch-case
// Author: Venu Goapl


#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Notice the space before %c to consume any leftover whitespace

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d %c %d = %d\n", num1, op, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d %c %d = %d\n", num1, op, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d %c %d = %d\n", num1, op, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%d %c %d = %d\n", num1, op, num2, result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                result = num1 % num2;
                printf("%d %c %d = %d\n", num1, op, num2, result);
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

