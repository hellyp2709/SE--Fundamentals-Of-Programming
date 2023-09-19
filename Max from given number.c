#include<stdio.h>
int main()
{
	int number[100],i,n,j;
	printf("Enter no. of elements:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++)
	{
		
	
	for(j=1;j<n;j++)
	{
		if(number[i]<number[j])
		{
			number[i]=number[j];
		}
	}
	}
	
		printf("%d is greater",number[0]);

		return 0;
}
