
//     Simple Calculator:
//         -Perform basic arithmetic operations (addition, subtraction, multiplication, and division).
//         -Allow user input for numbers and operation selection.
int main() {
    int choice;
    float num1, num2, result;
    while (1) {
        printf("\n**** Menu ****\n");
        printf("1. Addition: (+)\n");
        printf("2. Subtraction: (-)\n");
        printf("3. Multiplication: (*)\n");
        printf("4. Division: (/)\n");
        printf("5. Exite\n");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("***Exiting***\n");
            break;
        }

        printf("Enter two numbers: \n");
        scanf("%f%f", &num1, &num2);
        switch (choice) {
            case 1:
                result = num1 +num2;
                printf("result = %f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("result = %f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("result = %f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("result = %f\n", result);
                }else {
                    printf(" Num1 Not Divisible  by Zero\n");
                    continue;
                }
            default:
                printf("Please select 1-5:\n");
        }
    }
}