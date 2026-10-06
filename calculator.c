#include <stdio.h>
#include <math.h>

void show_menu() {
    printf("\n=== Simple C Calculator ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Power (x^y)\n");
    printf("7. Exit\n");
    printf("Choose an operation: ");
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        show_menu();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
            case 5:
                if ((int)num2 != 0) {
                    printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                } else {
                    printf("Error: Modulus by zero is not allowed!\n");
                }
                break;
            case 6:
                result = pow(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 7:
                printf("\nExiting calculator. Goodbye!\n");
                break;
            default:
                printf("\nInvalid option! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}