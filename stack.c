//
// Created by Student on 26.05.2025.
//
#include <iostream>
#include "stack.h"
#include "list.h"

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* head = NULL;
int nodeCount = 0;


int insertFront(int element) {
    node* current = (node*)malloc(sizeof(node));
    if (current) {
        current->data = element;
        current->next = head;
        head = current;
        nodeCount++;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int Top(void)
{
    node* current = head;
    while(current != NULL){
        current = current->next;
    }
        return current->data;
}

int deleteFront() {
    if (head != NULL) {
        node* current = head;
        head = head->next;
        free(current);
        nodeCount--;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

void printList(void) {
    node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int getNodesCount() { return nodeCount; }

void freeList(void) {
    while (nodeCount) deleteFront();
    head = NULL;
}
