#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init(stack_t *ptr_stack)
{
	ptr_stack->head_ = NULL;
}

void push(stack_t* ptr_stack, int elem)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	temp->key_ = elem;
	temp->link_ = ptr_stack->head_;
	ptr_stack->head_ = temp;
	
}

int pop(stack_t* ptr_stack)
{
	node_t* temp = ptr_stack->head_;
	int elem = temp->key_;
	ptr_stack->head_ = temp->link_;
	free(temp);
	return elem;

}

int is_empty(const stack_t* ptr_stack)
{
	return ptr_stack->head_ == NULL;
}
