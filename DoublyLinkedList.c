#include "DoublyLinkedList.h"

/**
 * @brief This function will execute any code needed for testing.
 * 
 * @param argc Represents the number of command-line arguments passed to the 
 * program
 * 
 * @param argv Represents an array of character pointers, where each element 
 * points to a string representing a command-line asrgument. argv[0] is always 
 * the name of the program itself 
 */
int main(int argc, char *argv[]) 
{
    return(0);
}

DoublyLinkedList *emptyList() 
{
    DoublyLinkedList *l = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
    l->head = NULL;
    l->tail = NULL;
    l->length = 0;
    return l;
}

DoublyLinkedList *newDoublyLinkedList(int length) 
{
    DoublyLinkedList *l = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
    l->head = (Node *) malloc(sizeof(Node));
    l->tail = (Node *) malloc(sizeof(Node));
    Node *cursor = l->head;
    int count = 0;
    while (getNext(cursor) != NULL) 
    {
        count++;
        if ()
        cursor = userInputNode();
        cursor = getNext(cursor);
    }
}

void *addToHead(DoublyLinkedList *l, Node *n) 
{
    setPrev(l->head, n);
    l->head = n;
    l->length++;
}

void *addToTail(DoublyLinkedList *l, Node *n) 
{
    setNext(l->tail, n);
    l->tail = n;
    l->length++;
}

void *setHead(DoublyLinkedList *l, Node *n) 
{
    if (l == NULL) 
    {
        printf("Cannot add a head on a NULL Doubly Linked List.\n");
        return;
    }
    if (n == NULL) 
    {
        l->head = emptyNode();
        return;
    }
    l->head = n;
}

Node *getHead(DoublyLinkedList *l) 
{
    if (l == NULL) 
    {
        printf("Cannot retrieve a head on a NULL Doubly Linked List.\n");
        return;
    }
    return l->head;
}

void *setTail(DoublyLinkedList *l, Node *n) 
{
    if (l == NULL) 
    {
        printf("Cannot set a tail on a NULL Doubly Linked List.\n");
    }
    if (n == NULL) 
    {
        l->tail = emptyNode();
        return;
    }
    l->tail = n;
}

Node *getTail(DoublyLinkedList *l) 
{
    return l->tail;
}

int getLength(DoublyLinkedList *l) 
{
    if (l->length == NULL) 
    {
        printf("Length was null.\n");
        return NULL;
    }
    if (l->length < 0 || l->length > 2147483647) 
    {
        printf("Length was not appropriate.\n");
        return -1;
    }
    return l->length;
}

void *printList(DoublyLinkedList *l) 
{
    if (l == NULL) 
    {
        printf("NULL\n");
        return;
    }
    Node *cursor = l->head;
    printf("<{");
    while (cursor != NULL) 
    {
        printf("Datum1: %d, Datum2: %.2lf, Datum3:  %c, Name: %s}, \n", 
                cursor->datum1, cursor->datum2, cursor->datum3, cursor->name);
        if (getNext(cursor) != NULL) 
        {
            printf("}, \n");
        }
        else 
        {
            printf("}");
        }
        cursor = getNext(cursor);
    }
    printf("}>\n");
}

void *freeList(DoublyLinkedList *l) 
{
    if (l == NULL) 
    {
        printf("There is nothing to free.\n");
        return;
    }
    if (l->length == 0) 
    {
        free(l);
        return;
    }
    if (l->length == 1) 
    {
        free(getHead(l));
        free(l);
        return;
    }
    Node *cursor = getHead(l);
    while (cursor != NULL) 
    {
        Node *temp = cursor;
        cursor = getNext(cursor);
        freeNode(temp);
    }
    free(l);
}