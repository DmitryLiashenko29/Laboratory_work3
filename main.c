#include "stack.h"
#include <stdio.h>

int main(){
    List list = NULL;
    printf("empty: %d\n", is_empty(list) ? 1:0);
  
    push(&list, 10);
    push(&list, 20);
    push(&list, 30);
    printf("empty: %d\n", is_empty(list) ? 1:0);
    print_stack(list);
    clear_stack(&list);
    printf("empty: %d\n", is_empty(list) ? 1:0);
}