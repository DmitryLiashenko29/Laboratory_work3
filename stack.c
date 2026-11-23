#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

List init_list()
{
    return NULL;
}

void print_stack(List list){
    
    for(List pt = list ; pt!= NULL; pt = pt->next){
        printf("%d ", pt->val);
    }
    printf("\n");
}

void push(List *plist, Data x){
    List p = (List)malloc(sizeof(struct Node)); // Выделили память под новый узел
    p->next = *plist;
    p->val = x;
    *plist = p; 
}

Data pop(List *plist){
    List pt = *plist;
    Data res = pt->val;
    free(pt);
    return res;
}