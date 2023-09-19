#include<stdio.h>

int main() 
{
    int num = 1523;
    int originalNum = num;
    int sum = 0;

    while (num > 0) 
	{
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The summation of the digits in %d is:- %d\n",originalNum,sum);

    return 0;
}
