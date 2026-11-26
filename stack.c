#include "stack.h"

void print_stack(Stack *pstack)
{
    for(Node *node = pstack->top; node!= NULL; node = node->next){
        printf("%d ", node->val);
    }
    printf("\n");
}

void push(Stack *pstack, Data x)
{
    Node *p = (Node *)malloc(sizeof(Node)); // Выделили память под новый узел
    if (p == NULL)
    {
        return;
    }
    p->next = pstack->top;
    p->val = x;
    pstack->top = p; 
}

void init_stack(Stack *pstack)
{
    pstack->top = NULL;
}

int is_empty(Stack *pstack)
{
    return (pstack->top == NULL) ? 1 : 0;
}

Data get_peek(Stack *pstack)
{
    if (!is_empty(pstack))
    {
        Node *node = pstack->top;
        return node->val;
    }
    return INT_MIN;
}

Data pop(Stack *pstack)
{
    if (!is_empty(pstack))
    {
        Node *node = pstack->top;
        Data res = node->val;
        pstack->top = node->next;
        free(node);
        return res;
    }
    return INT_MIN;
}

int stack_size(Stack *pstack)
{
    int count = 0;
    Stack temp;
    init_stack(&temp);
    while(!is_empty(pstack))
    {
        push(&temp, pop(pstack));
        count ++;
    }
    while (!is_empty(&temp))
    {
        push(pstack, pop(&temp));
    }
    return count;
}

void clear_stack(Stack *pstack)
{
    while(!is_empty(pstack))
    {
        pop(pstack);
    }
}