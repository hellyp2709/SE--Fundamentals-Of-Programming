#include<stdio.h>
int main()
{
	float height, base;
	printf("Enter height");
	scanf("%f",&height);
	printf("Enter base");
	scanf("%f",&base);
	float area=0.5*height*base;
	printf("Area of Triangle is %d",area);
	return 0;
	
}
