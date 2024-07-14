//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

   
    if (operator == '+')
	{
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '-') 
	{
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '*') 
	{
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    } else if (operator == '/') 
	{
        if (num2 != 0) 
		{
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else 
		{
            printf("Error! Division by zero.\n");
        }
    } else if (operator == '%') 
	{
        if (num2 != 0) 
		{
            result = (int)num1 % (int)num2;
            printf("Result: %.2lf\n", result);
        } else 
		{
            printf("Error! Modulo by zero.\n");
        }
    } else 
	{
        printf("Error! Invalid operator.\n");
    }

    return 0;
}

