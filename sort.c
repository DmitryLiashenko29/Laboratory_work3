#include "stack.h"

void insertion_sort(List *main_stack){

    List sorted_part= NULL;
    List temp = NULL;
    while(!is_empty(*main_stack))
    {
        while(!is_empty(sorted_part) && (get_pick(sorted_part) > get_pick(*main_stack)))
        {
            push(&temp, pop(&sorted_part));
        }
        push(&sorted_part, pop(main_stack));

        while (!is_empty(temp)){
            push(&sorted_part, pop(&temp));
        }
    }
    while (!is_empty(sorted_part)){
        push(main_stack, pop(&sorted_part));
    }

}