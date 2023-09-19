#include <stdio.h>

int main()
{
    int num,i,evenCount=0,oddCount=0,evenSum=0,oddSum=0;

    printf("Enter 10 numbers:\n");

    for (i=1;i<=10;i++) 
	{
        printf("Enter number %d: ",i) ;
        scanf("%d", &num);
        
        if (num%2==0) 
		{
            evenCount++;
            evenSum+=num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }
    return 0;
}

