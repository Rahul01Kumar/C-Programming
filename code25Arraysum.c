#include <stdio.h>
#define SIZE 5
void main()
{
	int arr[SIZE];
	int i,sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("\nEnter the element[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<SIZE;i++){
		sum=sum+arr[i];
	}
	printf("Sum is=%d\n",sum);
}
