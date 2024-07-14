// Check the Number is Palindrop or not.
#include <stdio.h>

int main()
{
	int num,rem,rev,org;
	
	printf("Enter the num :");
	scanf("%d",&num);
	org=num;
    
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10 + rem;
	num=num/10;
    }
    
	if(org==rev)
	 {
	 	printf("%d is palindrome",org);
	 }
	else
	{
		printf("%d is not palindrome",org);
	}
	
	
	return 0;
}

    

