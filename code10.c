#include <stdio.h>

void main()
{
	int x=2345,y=0;
	while(x){
		y=x%10;
		printf("%d",y);
		y=x/10;
	}
		return (0);
	}
