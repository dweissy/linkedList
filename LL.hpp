#ifndef LLIST_HPP_
#define LLIST_HPP_

/* The type declaration of the ADT. */
typedef struct _llist llist;

/* Returns a new linked list. */
llist * newLList(void);

/* Deletes a linked list. */
void deleteLList(llist * ll);

/* Prints a linked list. */
void printLList(llist * ll);

/* Puts an element into front of linked list */
int putLList(llist * ll, int data);

/* Gets first element from linked list */
int getLList(llist * ll);

#endif