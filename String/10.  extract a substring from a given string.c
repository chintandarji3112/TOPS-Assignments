#include <stdio.h>
 #include <stdlib.h>
int main()
{
	//helloworld
	//llo
	//pos=3 length=5
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("Input a string\n");
    fgets(string, sizeof string, stdin);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 	//janvi desai l=5 c=0
 	//pos=3
 	//0<5
 	//n v i
 	//sub[0]= str[2]  n
 	//sub[1]=str[3] v
 	//sub[2]=str[2+3-1] i
 	
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub); 
 
   return 0;
}
