#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int l,r,k,y=0;
	scanf("%d %d %d", &l,&r, &k);
	for(int i=l;i<=r;i++)
	{
		if(i%k==0) y++;
	}
	printf("%d", y);
}
