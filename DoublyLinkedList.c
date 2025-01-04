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
    l->head = (Node *) malloc(sizeof(Node));
    l->tail = (Node *) malloc(sizeof(Node));
    l->length = 0;
    return l;
}

DoublyLinkedList *newDoublyLinkedList(Node *head, Node *tail, int length) 
{
    DoublyLinkedList *l = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
    l->head = (Node *) malloc(sizeof(Node));
    l->head = userInputNode();
    l->tail = (Node *) malloc(sizeof(Node));
    l->tail = userInputNode();
    setNext(l->head, l->tail);
    setPrev(l->tail, l->head);
    Node *cursor = l->head;
    while (getNext(cursor) != NULL) 
    {
        getNext(cursor);
    }
}

void *addToHead(DoublyLinkedList *l, Node *n) 
{

}

void *addToTail(DoublyLinkedList *l, Node *n) 
{

}

void *setHead(DoublyLinkedList *l, Node *n) 
{

}

Node *getHead(DoublyLinkedList *l) 
{
    return l->head;
}

void *setTail(DoublyLinkedList *l, Node *n) 
{

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
    }
    Node *cursor = l->head;
    printf("<{");
    while (cursor != NULL) 
    {
        if (getPrev(cursor) == NULL) 
        {
            printf("Datum1: %d, Datum2: %.2lf, Datum3:  %c, Name: %s}, \n", 
                cursor->datum1, cursor->datum2, cursor->datum3, cursor->name);
        }
        else if (getNext(cursor) == NULL) 
        {
            printf("{Datum1: %d, Datum2: %.2lf, Datum3:  %c, Name: %s", 
                cursor->datum1, cursor->datum2, cursor->datum3, cursor->name);
        }
        else 
        {
            printf("{Datum 1: %d, Datum 2: %.2lf, Datum 3:  %c, Name: %s}, \n", 
                cursor->datum1, cursor->datum2, cursor->datum3, cursor->name);
        }
        setNext(cursor, getNext(cursor));
    }
    printf("}>\n");
}

void *freeList(DoublyLinkedList *l) 
{
    if (l == NULL) 
    {
        printf("There is nothing to free.\n");
    }
    if (l->length == 0) 
    {
        free(l);
    }
    if (l->length == 1) 
    {
        free(getHead(l->head));
        free(l);
    }
    if (getLength(l) > 1) 
    {
        Node *cursor = getHead(l);
        while (getNext(cursor) != NULL) 
        {
            setNext(cursor, getNext(cursor));
        }
    }
}