#include <stdio.h>
void main()
{
	int input,remainder,sum_odd=0,sum_even=0;
	printf("Enter the number = ");
	scanf("%d",&input);
	
	while(input!=0)
	{
		remainder=input%10;
		if(remainder%2!=0){
			sum_odd=(sum_odd)+remainder;
		}else{
			sum_even=(sum_even)+remainder;
		}
		input=input/10;
		
		
	}
	
	if(sum_odd==sum_even)
	{
		printf("The number is divisible by 11");
	}
	else{
		printf("The number is not divisible by 11");
	}
}
