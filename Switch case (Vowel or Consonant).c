#include<stdio.h>
int main()
{
	char vowel,choice;
	printf("enter alphabet:");
	scanf("%c",&choice);
	switch(choice)
	{
	case 'a':
	case 'e':
	case 'i':
    case 'o':
    case 'u':	
    case 'A':
    case 'E':
	case 'I':
	case 'O':
	case 'U':
	    	printf("%c IS vowel.\n",choice);
	    	break;
	default:
	    	printf("%c IS consonant.\n",choice);
	    	break;
	}
	return 0;
}
