#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void main()
{
    char s[200];
    int count = 1, i;
 
    printf("Enter the string:\n");
    fgets(s, sizeof s, stdin);
    //janvi  desai
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count);
}
