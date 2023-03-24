#include <stdio.h>
#define SIZE 20
void main()
{
	int arr[SIZE];	
	int i;
	for(i=0;i<SIZE;i++){
		printf("\n Enter the element[%d]=",i);
		scanf("%d",&arr[i]);
		}
	for(i=0;i<SIZE;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);
	}
}
