//
// Created by janwo on 14/06/2025.
//

#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <iostream>
#include <string.h>

#define MAX_LEN 100
#define FILE_NAME "tasks.txt"

typedef struct Task {
    char description[MAX_LEN];
    int done;  // 0 - do zrobienia, 1 - zrobione
    struct Task *next;
} Task;
Task* addTask(Task *head, const char *desc);

Task* removeTask(Task *head, int index);

void printTasks(Task *head);

void freeTasks(Task *head);

void saveTasksToFile(Task *head);

Task* loadTasksFromFile();

void markTaskDone(Task *head, int index);

#endif //FUNKCJE_H
