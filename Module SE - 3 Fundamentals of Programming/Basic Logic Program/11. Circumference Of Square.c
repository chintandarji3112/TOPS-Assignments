// Write a C program to find the Circumference of Square Formul : C = 4 * a.
#include<stdio.h>

int main()
{
	float area, side;
	
	printf("Enter the Length of side of Square: \n");
	scanf("%f", &side);
	
	area = side * side;
	
	printf("Area of a square is %.2f \n", area);
	
    return 0;

}
