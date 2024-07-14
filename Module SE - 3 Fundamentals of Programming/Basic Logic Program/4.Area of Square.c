// Write a C program to find Area of Square Formula: a = a2.
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
