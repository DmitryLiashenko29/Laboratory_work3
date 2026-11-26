#include "stack.h"
#include "sort.h"
#include <time.h>
int main(){
    // Stack stack;
    // init_stack(&stack);
    // printf("empty: %d\n", is_empty(&stack));
    // if (!is_empty(&stack)){
    //     pop(&stack);
    // }
    // push(&stack, 10);

    // printf("size: %d\n", stack_size(&stack));
    // print_stack(&stack);
    // push(&stack, 15);
    // print_stack(&stack);
    // printf("size: %d \n", stack_size(&stack));

    // printf("верх стека: %d\n", get_peek(&stack));
    // printf("empty: %d\n", is_empty(&stack));
    // print_stack(&stack);
    // push(&stack, 40);
    // insertion_sort(&stack);

    // print_stack(&stack);
    // printf("верх стека: %d\n", get_peek(&stack));
    // print_stack(&stack);
    // printf("pop: %d \n", pop(&stack));
    // push(&stack, 5);
    // printf("pop: %d \n", pop(&stack));
    // print_stack(&stack);
    // clear_stack(&stack);
    // print_stack(&stack);

    srand(42);
    Stack stack1;
    init_stack(&stack1);
    Stack stack2;
    init_stack(&stack2);
    Stack Merge;
    init_stack(&Merge);
    for(int i=0; i<10; i++){
        push(&stack1, rand() % 100);
        push(&stack2, rand() % 100);
    }
    printf("Stack1: ");
    print_stack(&stack1);
    printf("Stack2: ");
    print_stack(&stack2);
    insertion_sort(&stack1);
    insertion_sort(&stack2);
    printf("После сортировки\n");
    printf("Stack1: ");
    print_stack(&stack1);
    printf("Stack2: ");
    print_stack(&stack2);

    merge(&stack1, &stack2, &Merge);
    printf("Merge: ");
    print_stack(&Merge);

}