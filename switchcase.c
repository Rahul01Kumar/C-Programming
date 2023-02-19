#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,choice;
	printf("\nEnter First value=");
	scanf("%d",&a);
	printf("\nEnter second value=");
	scanf("%d",&b);
	printf("\t\tARITHMATIC CALCULATOR");
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Exit");
	printf("\n\nEnter your choice(1-6)=");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		  	printf("\nAddition = %d",a+b);
		  	break;
		case 2:
			printf("\nSubtraction = %d",a-b);
			break;
		case 3:
			printf("\nmultiplication = %d",a*b);
			break;
		case 4:
			printf("\nDivision = %d",a/b);
			break;
		case 5:
			printf("\nRemainder =%d",a%b);
		case 6:
			exit(1);
		default:
			printf("\nwrong input");
	}
}
