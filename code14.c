#include <stdio.h>

void main()
{
	int x=5,i;
	for(i=0;i<x;i++)
	{if(i==3)
	{goto label;
	}
	printf("%d",i);
	}
label:
	printf("Jumped to label");
}
