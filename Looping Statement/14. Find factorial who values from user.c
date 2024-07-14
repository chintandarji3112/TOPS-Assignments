//Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>

int main()
{
	int i,f,num,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&num);
		
		f = 1;
		
		for(j=1;j<=num;j++)
		{
			f = f*j;
		}
		printf("Factorial of %d is : %d\n\n",num,f);
	}
	return 0;
}
