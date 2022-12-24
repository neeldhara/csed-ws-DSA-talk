#include <stdio.h>
#include "stack.h"

int main()
{
	int n;
	printf("enter an integer : ");
	scanf("%d",&n);
	
	// break into digits and push into stack 
	stack_t mystack;
	init(&mystack);
	while(n)
	{
		push(&mystack, n % 10);
		n /= 10;
	}
	int radix = 1;
	int r = 0;
	while(! is_empty(&mystack))
	{
		r = r   + pop(&mystack) * radix;
		radix *= 10;
		printf("%d\n", r);
	}
	printf("reverse # : %d\n", r);
		
}

// n : 1729

// d : 9  2 
// r : 0 9 92 
// radix : 1 10 100 
