#include <stdio.h>

void main()
{
	int a;
	printf("Enter first value =");
	scanf("%d",&a);
	/*if(a>=0){
		printf("Positive Number");
	}
	if(a%2==0){
		printf("Even Number");
	}
	else{
		printf("Odd Number");
	}*/
	
	//Ternary Operator
	//a%2==0?printf("Even Number"):printf("Odd Number");]
	(a%2==0 && a>=0? printf("Welcome"):printf("Bye"));
}
