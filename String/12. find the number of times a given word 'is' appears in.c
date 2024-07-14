#include <stdio.h>
#include <string.h>
void main()
{
	int ctr=0,j,freq=0;
        int i,s,spc;
	char str[100];
	
	
       printf("\n\nFind the number of times the word 'is ' in any combination appears :\n");
       printf("----------------------------------------------------------------------\n");	

	printf("Input the string : ");
	fgets(str,sizeof str,stdin);

        ctr=strlen(str);
	
	/*Counts the frequency of the word 'is' with a trailing space*/
	for(j=0;j<=ctr-3;j++)
	{
		i=(str[j]=='i'||str[j]=='I');
		s=(str[j+1]=='s'||str[j+1]=='S');
		
		spc=(str[j+3]==' '||str[j+3]=='\0');
		if ((i&&s&&spc)==1)
		   freq++;
	}
	printf("The frequency of the word \'is\' is : %d\n\n",freq);
}
