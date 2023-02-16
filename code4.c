/*
1. Take an integer
Output 1:
		value=5 square=25 cube=125
output 2:
		value   square    cube
		5       25        125
*/
#include <stdio.h>

void main()
{
	int a;
	printf("Enter the value:",a);
	scanf("%d",&a);
	printf("\n");
	printf("Output 1:");
	printf("\n\tValue=%d \tsquare=%d \tcube=%d",a,a*a,a*a*a);
	
	printf("\n");
	
	printf("\nOutput 2:");
	printf("\n\tValue \t\tsquare \t\tcube");
	printf("\n\t%d \t\t%d \t\t%d",a,a*a,a*a*a);
}
