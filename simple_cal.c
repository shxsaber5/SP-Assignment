#include <stdio.h>

int main() {
    char operator; scanf("%c", &operator);
    float num1, num2; scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n",num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("%.2f\n",num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
