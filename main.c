#include "stack.h"
#include "sort.h"

int main(){
    Stack stack;
    init_stack(&stack);
    printf("empty: %d\n", is_empty(&stack));
    if (!is_empty(&stack)){
        pop(&stack);
    }
    push(&stack, 10);
    push(&stack, 15);
    printf("верх стека: %d\n", get_pick(&stack));
    printf("empty: %d\n", is_empty(&stack));
    print_stack(&stack);
    push(&stack, 40);

    printf("верх стека: %d\n", get_pick(&stack));
    print_stack(&stack);
    printf("pop: %d \n", pop(&stack));
    push(&stack, 5);
    printf("pop: %d \n", pop(&stack));
    print_stack(&stack);
    clear_stack(&stack);
    print_stack(&stack);
}