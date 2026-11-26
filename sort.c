#include "stack.h"

void insertion_sort(Stack *main_stack)
{
    Stack sorted_part;
    init_stack(&sorted_part);
    Stack temp;
    init_stack(&temp);
    while(!is_empty(main_stack))
    {
        while(!is_empty(&sorted_part) && (get_peek(&sorted_part) > get_peek(main_stack)))
        {
            push(&temp, pop(&sorted_part));
        }
        push(&sorted_part, pop(main_stack));

        while (!is_empty(&temp)){
            push(&sorted_part, pop(&temp));
        }
    }
    while (!is_empty(&sorted_part)){
        push(main_stack, pop(&sorted_part));
    }
}

void merge(Stack *sorted1, Stack *sorted2, Stack *merge_stack)
{
    Stack temp;
    init_stack(&temp);
    while(!is_empty(sorted1) && !is_empty(sorted2) )
    {
        push(&temp,pop((get_peek(sorted1)< get_peek(sorted2)) ? sorted1 : sorted2 ));
    }

    while (!is_empty(sorted1))
    {
        push(&temp, pop(sorted1));
    }

    while (!is_empty(sorted2))
    {
        push(&temp, pop(sorted2));
    }

    while(!is_empty(&temp))
    {
        push(merge_stack, pop(&temp));
    }
}

void split_stack(Stack *pstack, Stack *left_stack, Stack *right_stack){
    int n = stack_size(pstack);
    int k = n/2;
    while (k > 0){
        push (left_stack, pop(pstack));
        k--;
    }
    while (!is_empty(pstack)){
        push (right_stack, pop(pstack));
    }
}


void merge_sort(Stack *pstack)
{
    if (stack_size(pstack) <= 1){
        return;
    }
    Stack left_stack;
    init_stack(&left_stack);
    Stack right_stack;
    init_stack(&right_stack);

    split_stack(pstack, &left_stack, &right_stack);

    merge_sort(&left_stack);
    merge_sort(&right_stack);
    
    merge(&left_stack, &right_stack, pstack);
}