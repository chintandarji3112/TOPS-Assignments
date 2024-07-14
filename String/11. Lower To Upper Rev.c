#include<stdio.h>

void main()
{
	char str[100];
	int ctr, ch, i;
	
		printf("\n Replace Lowercase charaters by Uppercase and Vise-versa : \n");
		printf("--------------------------------------------------------------\n");
		
		printf("Input The String : ");
		fgets(str, sizeof str, stdin);
		
	i=strlen(str);
	
	ctr = i;
	
	printf("\n The Given Sentence is :%s",str);
	printf("After Case changed the string is : ");
	for(i=0; i<ctr; i++)
	{
		ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
		putchar(ch);
	}
	printf("\n\n");
	
	return 0;
}
