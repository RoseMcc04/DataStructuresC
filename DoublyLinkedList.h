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
 * @brief This function will print out the data of each Node in the Doubly Linked List.
 * 
 * 
 */
void printList(DoublyLinkedList *l);

/**
 * 
 */
Node *addToHead(DoublyLinkedList *l, Node *n);

/**
 * 
 */
Node *addToTail(DoublyLinkedList *l, Node *n);

/**
 * 
 */
Node *add(DoublyLinkedList *l, Node *n);

/**
 * 
 */
void *setHead(DoublyLinkedList *l, Node *n);

/**
 * 
 */
Node *getHead(DoublyLinkedList *l);

/**
 * 
 */
void setTail(DoublyLinkedList *l, Node *n);

/**
 * 
 */
int getLength(DoublyLinkedList *l);

#endif /* DOUBLYLINKEDLIST_H */
