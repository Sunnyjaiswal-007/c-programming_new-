#include <stdio.h>
int main(){
    
    float a,b,result;
    int choice;
    printf("1.add\n2.subs\n3.mul\n4.divide\n");
    printf("enter your choice of algorithm:");
    scanf("%d",&choice);
    printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
    switch (choice){
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Division = %.2f", result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}