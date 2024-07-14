// Write a C program to determine eligibility for admission to a professional course based on the following criteria.

#include<stdio.h>

int main(){

	int maths,phy,chem,total;
	
	printf("Note: eligibility for admission is Total in all three subject >=190 or Total in Maths and Physics >=140\n\n");
	
	printf("Enter marks of subject maths: ");
	scanf("%d",&maths);
	
	printf("Enter marks of subject physics: ");
	scanf("%d",&phy);
	
	printf("Enter marks of subject chemistry: ");
	scanf("%d",&chem);
	
	total = maths + phy + chem;
	printf("\nTotal marks of above three subjects: %d\n",total);
	int mathphy = maths + phy;
	printf("Total marks of maths and physics: %d\n",mathphy);
	
	if(maths>=65 && phy>=55 && chem>=50 && total>=190 || mathphy>=140)
	{
		printf("\nThe candidate is eligible for admission to a professional course");
	}
	else
	{
		printf("\nThe candidate is not eligible for admission to a professional course");
	}

	return 0;
}
