// Accept 5 names from user at run time.

#include<stdio.h>

int main()
{
	int i;
	char names[5];
	
	printf("Enter Name:\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter names %d:",i+1);
		scanf("%s",names);
		printf("%d) %s\n",i+1,names);
	}
	return 0;
}
