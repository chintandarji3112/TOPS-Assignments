// WAP to find the largest of three numbers.

#include<stdio.h>

int main()
{
	 int num1,num2,num3,largest;
	 
	 printf("Enter First Number : ");
	 scanf("%d",&num1);
	 
	 printf("Enter Second Number : ");
	 scanf("%d",&num2);
	 
	 printf("Enter Third Number : ");
	 scanf("%d",&num3);
	 
	 largest = num1;
	 
	 if(num2>largest && num2>num3)
	 {
	 	largest = num2;
	 }
	 else if (num3>largest && num3>num2)
	 {
	 	largest = num3;
	 }
	 
	 printf("\n\nLargest Number is : %d\n",largest);
	
	return 0;
}
