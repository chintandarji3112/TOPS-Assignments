//Factorial Of Given Number Using While Loop.
#include<stdio.h>

int main()
{
	int i = 1,f = 1,n;
	printf("input the number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		f *= i;
		i++;
	}
	
	printf("Factorial of %d is %d\n",n,f);

	return 0;
}
