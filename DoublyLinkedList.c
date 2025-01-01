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
    // DoublyLinkedList *l = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
    // l->head = NULL;
    // l->head->name = NULL;
    // l->tail = NULL;
    // l->tail->name = NULL;
    // l->length = 0;
    // return l;
}

DoublyLinkedList *newDoublyLinkedList(Node *head, Node *tail, int length) 
{
    DoublyLinkedList *l = (DoublyLinkedList *) malloc(sizeof(DoublyLinkedList));
}

void printList(DoublyLinkedList *l) 
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
        setNext(cursor, cursor->next);
    }
    printf("}>\n");
}