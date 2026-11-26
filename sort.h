#ifndef SORT
#define SORT
void insertion_sort(Stack *pstack);
void merge(Stack *pstack1, Stack *pstack2, Stack *merge_stack);
void merge_sort(Stack *pstack);
void split_stack(Stack *pstack, Stack *left_stack, Stack *right_stack);
#endif