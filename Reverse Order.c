#include <stdio.h>
int main() 
{
    int no, reversed = 0, remainder;

    printf("Enter no: ");
    scanf("%d", &no);

    while (no != 0) 
	{
        remainder = no%10;
        reversed = (reversed*10)+remainder;
        no=no/10;
    }
    printf("Reversed no: %d\n", reversed);

    return 0;
}
