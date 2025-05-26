#include <iostream>
#include "list.h"
#include "stack.h"


void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("SIMPLE LINKED LIST using structures\n");
    printf("1. Push an element to the stack\n");
    printf("2. Pop the first element\n");
    printf("3. Read the top value\n");
    printf("4. Print the stack\n");
    printf("5. Clear Stack\n\n");
    printf("0. Exit\n\n");
}

int main()
{
    int value = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }
        switch (option) {
            case 1: // add at the front
                printf("Input a number: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = insertFront(value);
                !errorCode ? printf("Added successfully!\n\n") : printf("Failed to add.\n\n");
                break;

            case 2: //Read the top value
                printf("the top value of the stack is %d",Top());

            case 3: // delete the first element
                errorCode = deleteFront();
                !errorCode ? printf("First element deleted successfully!\n\n") : printf("Failed to delete the first element.\n\n");
                break;

            case 4: // print the list
                printf("List: ");
                printList();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 5: // clear the list
                freeList();
                printf("List cleared.\n");
                break;

            case 0:
                freeList();
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    freeList();
    return 0;
}
