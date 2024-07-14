//Check Pass or Fail.
#include <stdio.h>

int main() {
    int marks;

    
    printf("Enter the marks: ");
    scanf("%d", &marks);

   
    if (marks >= 33)
        printf("Congratulations! You are passed.\n");
    else
        printf("Sorry, you are failed. Better luck next time.\n");

    return 0;
}

