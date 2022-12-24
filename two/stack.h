
#ifndef STACK_H
#define STACK_H

struct node
{
	int key_;
	struct node* link_;
};
typedef struct node node_t;
struct stack
{
	node_t* head_;
};
typedef struct stack stack_t;

void init(stack_t *ptr_stack);
void push(stack_t* ptr_stack, int elem);
int pop(stack_t* ptr_stack);
int is_empty(const stack_t* ptr_stack);
#endif

