//
// Created by Student on 26.05.2025.
//

#ifndef SIMPLE_LIST_LIST_H
#define SIMPLE_LIST_LIST_H

/* --------- ERROR CODES ---------- */
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* ---------- INSERTING ---------- */

int insertFront(int element);
// Inserts passed argument at the front of the list
// Returns:
// EXIT_SUCCESS (0), if added successfully
// EXIT_FAILURE (1), if couldn't add (memory allocation fail)



int deleteFront();
// Deletes the first element from the list
// Returns:
// EXIT_SUCCESS (0), if deleted successfully
// EXIT_FAILURE (1), if couldn't delete (no nodes)


/* ---------- OTHER ---------- */


void printList(void);
// Prints the list

int getNodesCount();
// Returns the current amount of elements (nodes)

void freeList(void);
// Frees memory allocated by the list

int Top(void);

#endif //SIMPLE_LIST_LIST_H
