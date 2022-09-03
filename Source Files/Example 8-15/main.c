#include <stdio.h>

void add(void);
void sub(void);
void mul(void);
void div(void);

int main(void)
{
    int choice;

    printf("SIMPLE CALCULATOR\n\n");

    do
    {
        printf("1 - addition\n");
        printf("2 - subtraction\n");
        printf("3 - multiplication\n");
        printf("4 - division\n");
        printf("0 - Quit\n\n");
        scanf("%d", &choice);
        printf("\n");

        if (choice != 0)
        {
            switch (choice)
            {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            default:
                printf("ERROR: Choose between 1 and 4 or 0 to Quit\n\n");
                break;
            }
        }
        else
        {
            printf("BYE BYE!\n");
        }
    } while (choice != 0);

    return 0;
}

void add(void)
{
    double op1;
    double op2;
    double result;

    printf("Enter operand1: ");
    scanf("%lf", &op1);
    printf("Enter operand2: ");
    scanf("%lf", &op2);

    result = op1 + op2;

    printf("\nop1 + op2 = %f\n\n", result);
}


void sub(void)
{
    double op1;
    double op2;
    double result;

    printf("Enter operand1: ");
    scanf("%lf", &op1);
    printf("Enter operand2: ");
    scanf("%lf", &op2);

    result = op1 - op2;

    printf("\nop1 - op2 = %f\n\n", result);
}


void mul(void)
{
    double op1;
    double op2;
    double result;

    printf("Enter operand1: ");
    scanf("%lf", &op1);
    printf("Enter operand2: ");
    scanf("%lf", &op2);

    result = op1 * op2;

    printf("\nop1 * op2 = %f\n\n", result);
}


void div(void)
{
    double op1;
    double op2;
    double result;

    printf("Enter operand1: ");
    scanf("%lf", &op1);
    printf("Enter operand2: ");
    scanf("%lf", &op2);

    result = op1 / op2;

    printf("\nop1 / op2 = %f\n\n", result);
}
