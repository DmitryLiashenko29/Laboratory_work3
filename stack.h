#ifndef STACK
#define STACK
#include <stdlib.h>
#include <stdio.h>
typedef int Data;
struct Node {
    Data val;
    struct Node * next;
};
typedef struct Node * List;

Data pop(List *plist);
void push(List *plist, Data x);
int is_empty(List list);
void clear_stack(List *plist);
void print_stack(List list);
Data get_pick(List list);
#endif 