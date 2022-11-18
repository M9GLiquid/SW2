#include "main.h"
#include <stdio.h>
#include <stdlib.h>

struct LinkedList *createNode(int id, double sensorData) {
  Node *ptrNode;
  ptrNode = (Node *)malloc(sizeof(Node));

  if (ptrNode == NULL) {
    printf("No more Memory to allocate!");
    return NULL;
  }
  ptrNode->id = id;
  ptrNode->sensorData = sensorData;
  ptrNode->next = NULL;

  return ptrNode;
}
/*
 * Note for self
 * (**) means observed outside the function, (*) means that it is not observed
 * outside the function
 */
void insertFirst(Node **first, Node *el) {
  // Make sure we got values and nothing blank and that el doesn't already exist
  // in the list
  if (*first == NULL || el == NULL || isMember(first, el) == 1)
    return;
  Node *tempNode = *first;
  *first = el;
  (*first)->next = tempNode;
}

int isMember(Node **first, Node *el) {
  Node *tempNode = *first;
  while (tempNode != NULL) {
    if (tempNode->id == el->id) // same ID
      return 1;
    tempNode = tempNode->next;
  }
  return 0;
}

void printList(Node *first) {
  Node *temp = first;
  while (temp != NULL) {
    printf("ID, Sensor Data:\n %d,  %lf\n", temp->id, temp->sensorData);
    temp = temp->next;
  }
}

void removeNode(Node **first, Node *el) {
  if (first == NULL || el == NULL)
    return;

  Node *temp = *first;
  while (temp != NULL) {

    if (temp->id == el->id) {
      
    }
    temp = temp->next;
  }
}

int main() {
  Node *list, *newNode;
  list = createNode(1, 5.0);
  newNode = createNode(2, 10.0);
  insertFirst(&list, newNode);

  printf("");
  printList(list);
}