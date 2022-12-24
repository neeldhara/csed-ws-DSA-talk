
#ifndef STACK_H
#define STACK_H
#define MAX 10
struct stack
{
	int a_[MAX];
	int top_;
};
typedef struct stack stack_t;

void init(stack_t *ptr_stack);
void push(stack_t* ptr_stack, int elem);
int pop(stack_t* ptr_stack);
int is_empty(const stack_t* ptr_stack);
#endif

