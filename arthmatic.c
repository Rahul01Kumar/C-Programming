//Write a program to take 2 integer and perform arithmatic operation.

#include <stdio.h>
void table(int);// function declaration
void main()
{
	int n;
	printf("Enter the first value:");
	scanf("%d",&n);
	
	table(n);
	}

void table(int x);
{
	int i;
	for(i=1;i<=10;i++){
		printf("\n %d %d %d",x,i,x*i);
		i=i+1;
	}
}

