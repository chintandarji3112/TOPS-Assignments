// Write A C Program To Print The Pattern Who Given Below.

//A
//AB
//ABC
//ABCD
//ABCDE

#include<stdio.h>

int main()
{
	int i,j,n;
	char ch = 'A';
	
	printf("Enter Row : ");
    scanf("%d", &n);
    
     for(i = 1; i <= n; i++) 
	{
        for(j = 1; j <= i; j++)
		{
			printf("%c",ch);
			ch++;
		
		 }
		ch = 'A';
        printf("\n");
    }

    return 0;
}
