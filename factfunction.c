//WAP to print factorial of a number. 
#include<stdio.h>

void main()
{
 int x,i; // Define variables
 unsigned long long int  fact = 1; 
 //Take input from the user
 printf("Enter first number=");
 scanf("%d",&x);//

 if(x<0)
 {
 	printf("\n Negative numbers factorial is not DEFINED.");
 }
 else
 {
 	for(i = 2; i<=x; i++)
 	{
 		fact = fact * i; 
	}
	printf("\nFactorial of %d = %d",x,fact);
 }
}






