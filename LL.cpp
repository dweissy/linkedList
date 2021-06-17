#include <iostream>

#include "LL.hpp"

using namespace std;

/* Private node ADT. */

typedef struct _node node;

struct _node {
  int data;
  node * next;
};

/*A static function is a member function of a class that can be called even 
when an object of the class is not initialized. A static function cannot 
access any variable of its class except for static variables.*/

static node * newNode(int data)
{
    node * n = new node();
    if(!n) return NULL;
    n->data = data;
    n->next = NULL;
    return n;
}

static void deleteNode(node * n) 
{
    delete n;
}

/* Linked list library. */

struct _llist {
  node * head;
};

llist * newLList(void)
{
    llist * ll = new llist();
    if(!ll) return NULL;
    ll->head = NULL;
    return ll;
}

void deleteLList(llist * ll)
{
    if(!ll) return;
    node * n = ll->head;
    while(n)
    {
        node * next = n->next;
        delete n;
        n = next;
    }
    delete ll;
}

void printLList(llist * ll)
{
    if(!ll) return;
    node * n = ll->head;
    while(n)
    {
        cout << n->data << "," << endl;
        n = n->next;
    }
}

int putLList(llist * ll, int data)
{
    node * n = new node();
    n->data = data;
    n->next = ll->head;
    ll->head = n;
    return 0;
}

int getLList(llist * ll)
{
    if(!ll) return -1;
    if (ll->head == NULL) return -1;/* nothing to get */
    node * n;
    n = ll->head;
    ll->head = n->next;
    delete n;
    return 0;
}




