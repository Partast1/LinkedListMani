#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node* next;
};

void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->number);
        n = n->next;
    }
}


int main()
{
     // allokere 3 notes i heepen
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    //Malloc bruges til at allokere den forspurgte m�ngde memory
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));


    first->number = 1; // S�tter v�rdien for "first"
    first->next = second; // Binder "first" Node med "second" Node

    second->number = 2;// S�tter v�rdien for "second"

    second->next = third; // Binder "second" Node med "third" Node

    third->number = 3; // // S�tter v�rdien for "third"
    third->next = NULL; // Binder "third" Node med NULL

    printList(first);

    return 0;
}
