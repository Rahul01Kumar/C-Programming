#include <stdio.h>
void main()
{
	int a,b;
	scanf("%d ",&a);
	scanf("%d",&b);
	int c=a;
	a=b;
	b=c;
	printf("a: %d b: %d",a,b);
	
}
