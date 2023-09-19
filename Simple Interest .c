#include<stdio.h>
int main()
{
	int price,rate,year,sum;
	printf("Enter price");
	scanf("%d",&price);
	printf("Enter rate");
	scanf("%d",&rate);
	printf("Enter year");
	scanf("%d",&year);
	sum=(price*rate*year)/100;
	printf("Your Interest is %d",sum);
	return 0;
	
}
