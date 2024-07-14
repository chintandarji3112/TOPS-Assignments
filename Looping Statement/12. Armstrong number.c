// WAP to print Armstrong Number.

#include <stdio.h>
#include<math.h>

int main() {
	
	int n,rem,arm,digit,org;
	
	printf("Enter Digit:");
	scanf("%d",&digit);
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	org = n;
	
	while(n != 0){
		rem = n%10;
		arm = arm+pow(rem,digit);
		n =n/10;
	}	
	
	if(org == arm)
	{
		printf("The Number is Armstrong");
	}else{
		printf("The Number is Not Armstrong");
	}

	return 0;
}
