typedef int Data;
struct Node {
    Data val;
    struct Node * next;
};
typedef struct Node * List;

Data pop(List *plist);
void push(List *plist, Data x);
List init_list();
void print_stack(List list);
