#ifndef STACK
#define STACK
#include <stdbool.h>
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

#endif 