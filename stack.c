#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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
int is_empty(List list){
    return (list == NULL) ? 1 : 0;
}

Data pop(List *plist){
    List pt = *plist;
    Data res = pt->val;
    *plist = pt->next;
    free(pt);
    return res;
}

void clear_stack(List *plist){
    while(!is_empty(*plist)){
        pop(plist);
    }
}