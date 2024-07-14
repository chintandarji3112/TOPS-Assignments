// Accept 5 numbers from user and display all numbers.

#include <stdio.h>

int main() {
    int num,i;
    
   
    for (num = 0; num <= 5; num++) {
    	 printf("Enter  numbers:\n");
    	  scanf("%d", &num);
        printf("Your number is %d: ", num);
       
    }
    
    	printf("\n\nYour Loop of number is :\n");
    for(i = 1; i <= 5; i++)
    {
    	printf("%d\t",i);
	}
    return 0;
}

