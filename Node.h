#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief This struct holds data for the Node of a Linked List.
 * 
 * Fields:
 * 
 * datum1 (int): Integer data the Node holds
 * 
 * datum2 (double): Double data the Node holds
 * 
 * datum3 (char): Character data the Node holds
 * 
 * name (char*): Array with name data the Node holds
 * 
 * next (Node*): Pointer to the next Node
 * 
 * prev (Node*): Pointer to the previous Node
 */
typedef struct Node
{
    int datum1;
    double datum2;
    char datum3;
    char *name;
    struct Node *next;
    struct Node *prev;
} Node;

/**
 * @brief This function returns a new Node of default values in the Data Structure. 
 * 
 * @return Returns a new Node in the Data Structure with default values.
 */
Node *emptyNode();

/**
 * @brief This function creates a new Node structure in the Data Structure.
 * 
 * @param datum1 The Integer data the Node holds.
 * 
 * @param datum2 The Double data the Node holds.
 * 
 * @param datum3 The Character data the Node holds.
 * 
 * @param name The name of the person who claims the Node.
 * 
 * @param prev The previous Node in the Data Structure.
 * 
 * @param next The next Node in the Data Structure.
 * 
 * @return Returns the new Node from the inputs.
 */
Node *newNode(int datum1, double datum2, char datum3, char *name, Node *prev, Node *next); 

/**
 * @brief This function creates a new Node based on user input.
 * 
 * @return Returns the new Node created from the user input.
 */
Node *userInputNode();

/**
 * @brief This function produces a string representation of the Node.
 * 
 * @param n The Node the user is trying to print out.
 * 
 * @return Returns a string representation of the Node.
 */
void printNode(Node *n);

/**
 * @brief This function frees all of the attributes of the Node along with the 
 * Node itself. 
 * 
 * @param n The Node the user is trying to free. 
 */
void freeNode(Node *n);

/**
 * @brief This function sets the Integer data for the Node.
 * 
 * @param n The Node that will hold the new Integer data.
 * 
 * @param datum1 The Integer data the user wants the Node to hold.
 */
void *setDatum1(Node *n, int datum1);

/**
 * @brief This function returns the Integer data for the Node.
 * 
 * @param n The Node the user wants to return the Data on.
 * 
 * @return Returns the Integer data of the Node.
 */
int getDatum1(Node *n);

/**
 * @brief This function sets the Decimal/Double data for the Node.
 * 
 * @param n The Node that will hold the new Decimal/Double data.
 * 
 * @param datum2 The Decimal/Double data the user wants the Node to hold.
 */
void *setDatum2(Node *n, double datum2);

/**
 * @brief This function returns the Decimal/Double data for the Node.
 * 
 * @param n The Node that the user wants to return the data on.
 * 
 * @return Returns the Decimal/Double Data of the Node.
 */
double getDatum2(Node *n);

/**
 * 
 */
void *setDatum3(Node *n, char datum3);

/**
 * 
 */
char getDatum3(Node *n);

/**
 * 
 */
void *setName(Node *n, char *name);

/**
 * 
 */
char *getName(Node *n);

/**
 * @brief This function sets the previous Node for the current Node.
 * 
 * @param n1 The current Node in the Data Structure.
 * 
 * @param n2 The previous Node set in the Data Structure for the current Node.
 */
void *setPrev(Node *n1, Node *n2);

/**
 * @brief This function retrieves the previous Node for the current Node.
 * 
 * @param n The current Node in the Data Structure.
 * 
 * @return Returns the previous Node for the current Node.
 */
Node *getPrev(Node *n);

/**
 * @brief This function sets the next Node for the current Node.
 * 
 * @param n1 The current Node in the Data Structure.
 * 
 * @param n2 The next Node set in the Data Structure for the current Node.
 */
void *setNext(Node *n1, Node *n2);

/**
 * @brief This function retrieves the next Node for the current Node.
 * 
 * @param n The current Node in the Data Structure.
 * 
 * @return Returns the next Node in the Data Structure.
 */
Node *getNext(Node *n);

#endif /* NODE_H */
