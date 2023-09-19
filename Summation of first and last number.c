#include<stdio.h>

int main() 
{
    int num;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    int last=num%10;
    
    while (num>=10) 
	{
        num/=10;
    }
    int first=num;
    int sum =first+last;
    printf("Sum of first and last digits: %d\n",sum);
    
    return 0;
}
