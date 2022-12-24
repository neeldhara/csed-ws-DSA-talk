#include <stdio.h>
#include "stack.h"

void init(stack_t *ptr_stack)
{
	ptr_stack->top_ = -1;
}

void push(stack_t* ptr_stack, int elem)
{
	ptr_stack->a_[++ptr_stack->top_] = elem;
}

int pop(stack_t* ptr_stack)
{
	return ptr_stack->a_[ptr_stack->top_--];
}

int is_empty(const stack_t* ptr_stack)
{
	return ptr_stack->top_ == -1;
}
