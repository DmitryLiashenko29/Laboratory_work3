#ifndef STACK
#define STACK
typedef int Data;
struct Node {
    Data val;
    struct Node * next;
};
typedef struct Node * List;

Data pop(List *plist);
void push(List *plist, Data x);

void print_stack(List list);
#endif 