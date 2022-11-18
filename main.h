#ifndef SW_2_MAIN_H
#define SW_2_MAIN_H

typedef struct LinkedList {
  int id; // Is ID supposed to be updated or left as is when struct is moved
          // around
  double sensorData;
  struct LinkedList *next;
} Node;

// Constructor*
struct LinkedList *createNode(int id, double sensorData);

// function inserts el at the beginning of the list and updates first.
void insertFirst(Node **first, Node *el);

// function returns 1 if el is a member in the list and 0 otherwise.
int isMember(Node **first, Node *el);

// function prints the list from the beginning till the end. Each element should
// be printed on a separate line with the id value and the sensorData value
// separated by a tab.
void printList(Node *first);

// this function removes el from the list (if it is a member) without deleting
// it from memory.
void removeNode(Node **first, Node *el);

#endif // SW_2_MAIN_H
