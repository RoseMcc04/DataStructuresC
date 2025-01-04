#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

/**
 * @brief This struct will hold all of the Nodes of a Linked List.
 * 
 * head (Node*): The head Node of the Linked List.
 * 
 * tail (Node*): The tail Node of the Linked List.
 * 
 * length (int): The length of the Linked List.
 */
typedef struct DoublyLinkedList
{
    Node *head;
    Node *tail;
    int length;
} DoublyLinkedList;

/**
 * @brief This function creates an empty Doubly Linked List structure.
 * 
 * @return Returns an empty Doubly Linked List.
 */
DoublyLinkedList *emptyList();

/**
 * @brief This function will create an empty Doubly Linked List structure.
 * 
 * @param head The head of the Doubly Linked List.
 * 
 * @param tail The tail of the Doubly Linked List.
 * 
 * @param length The length of the Doubly Linked List.
 */
DoublyLinkedList *newDoublyLinkedList(Node *head, Node *tail, int length);

/**
 * @brief This function will add a head Node to the current Doubly Linked List.
 * 
 * @param l The Doubly Linked List we are adding a head Node to.
 * 
 * @param n The Node we are adding as the head of the Doubly Linked List.
 */
void *addToHead(DoublyLinkedList *l, Node *n);

/**
 * @brief This function will add a tail Node to the current Doubly Linked List.
 * 
 * @param l The Doubly Linked List being used for the operation.
 * 
 * @param n The Node we are adding onto the tail of the Doubly Linked List.
 */
void *addToTail(DoublyLinkedList *l, Node *n);

/**
 * @brief This function will add a head Node to the current Doubly Linked List.
 * 
 * @param l The Doubly Linked List being used for the operation.
 * 
 * @param n The Node being added to the tail of the Doubly Linked List.
 */
void *addBefore(DoublyLinkedList *l, Node *n);

/**
 * 
 */
Node *addAfter(DoublyLinkedList *l, Node *n1, Node *n2);

/**
 * @brief This function sets the head of the Doubly Linked List.
 * 
 * @param l The Doubly Linked List used for the operation.
 * 
 * @param n The Node being set as the head of the Doubly Linked List.
 */
void *setHead(DoublyLinkedList *l, Node *n);

/**
 * @brief This function returns the head of the Doubly Linked List.
 * 
 * @return Returns the head Node of the Doubly Linked List.
 */
Node *getHead(DoublyLinkedList *l);

/**
 * @brief This function sets the tail of the Doubly Linked List.
 * 
 * @param l The Doubly Linked List used for the operation.
 * 
 * @param n The Node being set as the tail of the Doubly Linked List.
 */
void *setTail(DoublyLinkedList *l, Node *n);

/**
 * @brief This function returns the tail of the Doubly Linked List.
 * 
 * @param l The Doubly Linked List used for the operation.
 * 
 * @return Returns the tail of the Doubly Linked List.
 */
Node *getTail(DoublyLinkedList *l);

/**
 * @brief This function returns the length of the Doubly Linked List.
 * 
 * @param l The Doubly Linked List inputted to retrieve its length.
 * 
 * @return Returns the length of the Doubly Linked List.
 */
int getLength(DoublyLinkedList *l);

/**
 * @brief This function will print out the data of each Node in the Doubly Linked List.
 * 
 * @param l The Doubly Linked List that we are trying to print out. 
 */
void *printList(DoublyLinkedList *l);

/**
 * @brief This function will free all Node structs and the Doubly Linked Listv struct in memory
 * for an inputted structure.
 * 
 * @param l The Doubly Linked List we are freeing from memory.
 */
void *freeList(DoublyLinkedList *l);

#endif /* DOUBLYLINKEDLIST_H */
