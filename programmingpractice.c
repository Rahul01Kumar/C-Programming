/*
1. Declare a integer variable
2. Take the value from user.
3. Print this value
Syntax: 
		if(exp)
		{
		statements;
	}
	else if(exp2){
	statemets;
}
// This is a switch case problem


*/
#include <stdio.h>
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
		
	
	
	
	/*if(a>=0)
	{
		printf("Positive");
		if(a%2==0)
		{
			printf("\nEven");
		}
		else{
		printf("\nOdd");
		}}
	else{
		printf("negative");
	}
	//printf("\nValue=%d \nSquare=%d \nCube%d",a,a*a,a*a*a);
	/*if(a>=60 && a<=100){
	printf("first");
	}
		
	else if(a>=45 && a<60){
		printf("Second");
	}else if(a>=33 && a<45){
		printf("Third");
	}else{
		printf("Fail");
	}
// Show not acceptable if the user inserting more than 100


	/*printf("\nThe value of 'A' = %d",a);
	//printf("\nThe value of 'A' = %f",a);
	//printf("\nThe value of 'A' = %c",a);*/
}
