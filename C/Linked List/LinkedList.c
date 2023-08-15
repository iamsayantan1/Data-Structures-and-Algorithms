#include<stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main()  {
    struct Node node1, node2, node3;
    struct Node *ptr = &node1;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    while(ptr)  {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}