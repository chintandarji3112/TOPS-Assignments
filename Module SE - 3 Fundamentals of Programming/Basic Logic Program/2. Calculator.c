// Write a C Program to make a Simple Calculator.
#include<stdio.h>
int main()
{
	int a, b, choice;
	
	printf("Enter Your choice: \n");
	printf("1. Addition\n2. Substraction\n3. Multipication\n4. Divison\n5. Modulo\n");
	scanf("%d", &choice);
	
	if( choice > 5 )
	{
		printf("select with in the Range!\n");
	}
	else
	{
		printf("Enter 2 integer numbers\n");
		scanf("%d %d", &a, &b);
	}
	
	switch(choice)
	{
		case 1: printf("%d + %d = %d\n", a, b, (a+b));
		break;
		
		case 2: printf("%d - %d = %d\n", a, b, (a-b));
		break;
		
		case 3: printf("%d * %d = %d\n", a, b, (a*b));
		break;
		
		case 4: if( b != 0)
			printf("%d / %d = %d\n", a, b, (a/b));
		else
			printf("Number can't be divided by 0\n");	
		break;
		
		case 5: if( b != 0)
           	printf("(%d) % (%d) = %d\n", a, b, (a%b));
		else 
            printf("Error: Division by zero\n");
        break;
		
		default: printf("You enterd wrong choice\n");
		break;
	}
	
	
	
    return 0;
}

