#include<stdio.h>
#include <string.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *START;

void insertLL_at_head()   {
    int key;
    struct Node *temp, *ptr;
    ptr = START = NULL;
    printf("Insert nodes, to stop inserting, press -1: ");
    scanf("%d",&key);
        if(key == -1)  return;
        ptr = malloc(sizeof(struct Node));
        ptr->data = key;
        ptr->next = NULL;
    while(1)    {
        scanf("%d",&key);
        if(key == -1)  break;
        temp = malloc(sizeof(struct Node));
        if(!temp)   {
            printf("Memory allocation failed.\n");
            return;
        }
        temp->data = key;
        temp->next = ptr;
        ptr = temp ;
    }
    START = ptr;
}

void printLL() {
    struct Node *ptr;
    ptr = START;

    if(ptr) printf("%d ", ptr->data);
    ptr = ptr->next;
    while(ptr)  {
        printf("-> %d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()  {
    insertLL_at_head();
    
    printLL();
    return 0;
}