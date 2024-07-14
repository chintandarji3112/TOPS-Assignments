// Triangle using formula Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
//#include<math.h>

int main()
{
	float a, b, c, sp, area;
	
	printf("Enter values of a, b and c\n");
	scanf("%f%f%f", &a, &b, &c);
	
	sp = (a+b+c)/2.0;
	
	area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	
	printf("Area of Triangle is %f\n", area);
	
	return 0;
}

