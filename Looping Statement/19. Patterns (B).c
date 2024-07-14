// Write A C program to Print the Pattern Who Given Below :

//A
//BC
//DEF
//GHIJ
//KLMNO

#include<stdio.h>

int main()
{
	int i,j,n;
	char ch = 'A';
	
	printf("Enter Row: ");
    scanf("%d", &n);
    
     for(i = 1; i <= n; i++) 
	{
        for(j = 1; j <= i; j++)
		{
			printf("%c",ch);
			ch++;
		
		 }
        printf("\n");
    }

    return 0;
}
