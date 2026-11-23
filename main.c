#include "stack.h"
#include <stdio.h>

int main(){
    List list = NULL;
    struct Node a, b, c;
    list = &a;
    a.val = 3;
    b.val = 5;
    c.val = 7;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    print_stack(list);
}