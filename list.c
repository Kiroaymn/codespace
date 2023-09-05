#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node* next;
}
node;
int main(void){
    node* list = NULL;
    node *n=malloc(sizeof(node));
    n->number =1 ;
    if(n==NULL){
        free n;
        return 1;
    }
}
