#ifndef STACK
#define STACK
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
typedef int Data;
typedef struct Node{
    Data val;
    struct Node * next;
} Node;

typedef struct{
    Node * top;
} Stack;

Data pop(Stack *pstack);
void push(Stack *pstack, Data x);
void init_stack(Stack *pstack);
int is_empty(Stack *pstack);
void clear_stack(Stack *pstack);
void print_stack(Stack *pstack);
int stack_size(Stack *pstack);
Data get_peek(Stack *pstack);

#endif 