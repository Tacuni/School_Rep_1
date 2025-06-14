#include <iostream>
#include "Funkcje.h"

int main() {
    Task *taskList = loadTasksFromFile();
    int choice;
    char buffer[MAX_LEN];

    do {
        printf("\n== Lista Zadan ==\n");
        printf("1. Dodaj zadanie\n");
        printf("2. Wyswietl zadania\n");
        printf("3. Usun zadanie\n");
        printf("4. Oznacz zadanie jako zrobione\n");
        printf("5. Zapisz do pliku\n");
        printf("6. Zakoncz\n");
        printf("Wybierz opcje: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("Opis zadania: ");
                fgets(buffer, MAX_LEN, stdin);
                buffer[strcspn(buffer, "\n")] = '\0';
                taskList = addTask(taskList, buffer);
            break;
            case 2:
                printTasks(taskList);
            break;
            case 3:
                printf("Numer zadania do usuniecia: ");
                int delIndex;
                scanf("%d", &delIndex);
                taskList = removeTask(taskList, delIndex);
            break;
            case 4:
                printf("Numer zadania do oznaczenia jako zrobione: ");
                int doneIndex;
                scanf("%d", &doneIndex);
                markTaskDone(taskList, doneIndex);
                break;
            case 5:
                saveTasksToFile(taskList);
            break;
            case 6:
                saveTasksToFile(taskList);
                freeTasks(taskList);
                printf("Zamykam program...\n");
                break;
            default:
                printf("Nieznana opcja.\n");
        }
    } while (choice != 6);

    return 0;
}
