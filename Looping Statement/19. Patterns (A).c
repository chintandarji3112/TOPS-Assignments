// Print the Pattern who give Below :
//1
//10
//101
//1010
//10101

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter Row : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
	{
        for(j = 1; j <= i; j++)
		{
            if(j % 2 == 1)
			{
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}

