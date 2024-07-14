// Write a C Program to Print The Pattern Who Given Below :

//1
//23
//456
//78910
//1112131415

#include<stdio.h>

int main()
{
	int i,j,n,temp = 1;
	
		printf("Enter Row : ");
    	scanf("%d", &n);
    	
    	for(i = 1; i <= n; i++) 
		{
        	for(j = 1; j <= i; j++)
				{
					printf("%d",temp);
					temp++;
				}
        	printf("\n");
    	}
    	
}
