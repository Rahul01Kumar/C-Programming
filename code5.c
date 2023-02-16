//Take 2 values from user and print the maximum and minimum no.

#include <stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("\nMaximum number=%d",a>b?a:b);
	printf("\nMinimum number=%d",a<b?a:b);
}
