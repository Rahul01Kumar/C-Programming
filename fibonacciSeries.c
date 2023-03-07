/*
Fibonacci series is a sequence of Integers 
that starts with 0 followed by 1, 
in this sequence the first two terms 
i.e. 0 and 1 are fixed, 
and we get the successive terms by 
summing up their previous last two terms. 
i.e, the series follows a pattern that 
each number is equal to the sum of its 
preceding two numbers.

Example: 
first = 0 
second  = 1
next = first + second // 1
0, 1, 1,
first = second; 
second = next

Explanation:
0
1
0 + 1 = 1
1 + 1 = 2
2 + 1 = 3
3 + 2 = 5
5 + 3 = 8
...


*/ 
#include <stdio.h>


int main()
{
	// variable to store how many elements to be displayed in the series
    int num,i;
	int first = 0, second = 1,next;  
    // taking user input
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num);
	 
    printf("\n%d,%d ",first,second);

    for ( i = 1; i <= num; i++)
    {
    	next = first + second;    	
        printf(",%d", next); 
        first = second; 
        second = next; 
    }

    return 0;
}
