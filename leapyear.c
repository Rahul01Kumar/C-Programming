#include <stdio.h>

void main()
{
	int y;
	printf("Enter the year:");
	scanf("%d",&y);
	if(y%400==0){
		printf("%d It is a leap year ",y);
	}else if(y%100==0){
		printf("It is not a leap year");
		
	}else if(y%4==0){
		printf("%d It is a leap year ",y);
	}else{printf("Outofbound");
	}
}
