//
// Created by janwo on 14/06/2025.
//

#include "Funkcje.h"

Task* addTask(Task *head, const char *desc) {
    Task *newTask = (Task*)malloc(sizeof(Task));
    if (!newTask) {
        printf("Błąd alokacji pamięci!\n");
        return head;
    }
    strncpy(newTask->description, desc, MAX_LEN);
    newTask->description[MAX_LEN - 1] = '\0';
    newTask->done = 0;
    newTask->next = NULL;

    if (head == NULL) {
        return newTask;
    }

    Task *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newTask;
    return head;
}

void freeTasks(Task *head) {
    while (head != NULL) {
        Task *temp = head;
        head = head->next;
        free(temp);
    }
}

Task* removeTask(Task *head, int index) {
    if (head == NULL || index < 1) {
        printf("Nieprawidłowy numer zadania.\n");
        return head;
    }

    Task *temp = head;
    if (index == 1) {
        head = head->next;
        free(temp);
        return head;
    }

    Task *prev = NULL;
    for (int i = 1; temp != NULL && i < index; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Zadanie nie istnieje.\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);
    return head;
}

Task* loadTasksFromFile() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) return NULL;

    Task *head = NULL;
    char buffer[MAX_LEN + 10];
    while (fgets(buffer, sizeof(buffer), file)) {
        int status;
        char desc[MAX_LEN];

        if (sscanf(buffer, "%d|%[^\n]", &status, desc) == 2) {
            Task *newTask = (Task*)malloc(sizeof(Task));
            if (!newTask) break;
            strncpy(newTask->description, desc, MAX_LEN);
            newTask->description[MAX_LEN - 1] = '\0';
            newTask->done = status;
            newTask->next = NULL;

            if (head == NULL) {
                head = newTask;
            } else {
                Task *temp = head;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newTask;
            }
        }
    }

    fclose(file);
    return head;
}

void saveTasksToFile(Task *head) {
    FILE *file = fopen(FILE_NAME, "w");
    if (!file) {
        printf("Nie można zapisać pliku.\n");
        return;
    }

    while (head != NULL) {
        fprintf(file, "%d|%s\n", head->done, head->description);
        head = head->next;
    }

    fclose(file);
    printf("Zadania zapisane do pliku '%s'.\n", FILE_NAME);
}

void printTasks(Task *head) {
    if (head == NULL) {
        printf("Brak zadań.\n");
        return;
    }
    int index = 1;
    while (head != NULL) {
        printf("%d. [%s] %s\n", index++, head->done ? "X" : " ", head->description);
        head = head->next;
    }
}

void markTaskDone(Task *head, int index) {
    int i = 1;
    while (head != NULL) {
        if (i == index) {
            head->done = 1;
            printf("Zadanie %d oznaczone jako zrobione.\n", index);
            return;
        }
        head = head->next;
        i++;
    }
    printf("Nie znaleziono zadania.\n");
}