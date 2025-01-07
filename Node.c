#include "Node.h"

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

Node *emptyNode() 
{
    Node *n = (Node *) malloc(sizeof(Node));
    n->datum1 = 0;
    n->datum2 = 0.00;
    n->datum3 = '\0';
    n->name = (char *) malloc(100 * sizeof(char));
    if (n->name == NULL) 
    {
        free(n);
        return NULL;
    }
    strcpy(n->name, "");
    n->prev = NULL;
    n->next = NULL;
    return n;
}

Node *newNode(int datum1, double datum2, char datum3, char *name, Node *prev, Node *next)
{
    Node *n = (Node *) malloc(sizeof(Node));
    if (n == NULL) 
    {
        return NULL;
    }
    n->datum1 = datum1;
    n->datum2 = datum2;
    n->datum3 = datum3;
    n->name = (char *) malloc(100 * sizeof(char));
    if (n->name = NULL) 
    {
        free(n);
        return NULL;
    }
    strcpy(n->name, name);
    n->prev = prev;
    n->next = next;
    return n;
}

Node *userInputNode() 
{
    Node *n = (Node *) malloc(sizeof(Node));
    if (n == NULL) 
    {
        free(n);
        return NULL;
    }
    printf("What Integer would you like for this Node to hold? \n");
    scanf("%d", &n->datum1);
    printf("What Double/Decimal would you like for this Node to hold? \n");
    scanf("%lf", &n->datum2);
    printf("What Character/Symbol would you like for this Node to hold? \n");
    scanf(" %c", &n->datum3);
    n->name = (char *) malloc(100 * sizeof(char));
    if (n->name == NULL) 
    {
        free(n);  // Free previously allocated memory for the node
        return NULL; // Return NULL if memory allocation fails
    }
    printf("What name would you like for this Node to hold? \n");
    scanf("%99s", n->name);
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void freeNode(Node *n) 
{
    if (n == NULL) 
    {
        return;
    }
    free(n->name);
    free(n);
}

void *setDatum1(Node *n, int datum1) 
{
    n->datum1 = datum1;
}

int getDatum1(Node *n) 
{
    return n->datum1;
}

void *setDatum2(Node *n, double datum2) 
{
    n->datum2 = datum2;
}

double getDatum2(Node *n) 
{
    return n->datum2;
}

void *setDatum3(Node *n, char datum3) 
{
    n->datum3 = datum3;
}

char getDatum3(Node *n) 
{
    return n->datum3;
}

void *setName(Node *n, char *name) 
{
    free(n->name);
    n->name = (char *) malloc(strlen(name) + 1);
    if (n->name != NULL) 
    {
        strcpy(n->name, name);
    }
}

char *getName(Node *n) 
{
    return n->name;
}

void *setPrev(Node *n1, Node *n2) 
{
    n1->prev = n2;
}

Node *getPrev(Node *n) 
{
    return n->prev;
}

void *setNext(Node *n1, Node *n2) 
{
    n1->next = n2;
}

Node *getNext(Node *n) 
{
    return n->next;
}

void printNode(Node *n) 
{
    if (n == NULL) 
    {
        printf("%p is completely NULL.\n", n);
        return;
    }
    printf("Datum 1: %d\n", n->datum1);
    printf("Datum 2: %.2lf\n", n->datum2);
    printf("Datum 3: %c\n", n->datum3);
    printf("Name: %s\n", n->name);
}
