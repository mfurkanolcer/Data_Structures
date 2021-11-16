#include <stdio.h>
#include <stdlib.h>

typedef struct _Node
{
    int data;
    struct Node* link;
}Node;


int lengthFind(Node *one)
{
    if(one == NULL)
        return 0;
    return 1+lengthFind(one -> link);


}

int main()
{
    Node* one;
    one = (Node* ) malloc (sizeof(Node));

    Node* two;
    two = (Node* ) malloc (sizeof(Node));

    Node* three;
    three = (Node* ) malloc (sizeof(Node));

    Node* four;
    four = (Node* ) malloc (sizeof(Node));

    one -> data = 11;
    one -> link = two;

    two -> data = 27;
    two -> link = three;

    three -> data = 36;
    three -> link = four;

    four -> data = 49;
    four -> link = NULL;

    printf("Linked List: %d -> %d -> %d -> %d",one->data,two->data,three->data,four->data);
    printf("\n\nLength of Linked List: %d\n", lengthFind(one));

    return 0;
}
