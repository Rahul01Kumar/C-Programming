#include <stdio.h>
void main()
{
	int n,l_d;
	printf("Enter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		l_d=n%10;
		printf("%d",l_d);
		n=n/10;

}
}
