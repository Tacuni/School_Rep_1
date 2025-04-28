#include <iostream>
#include "array.h"

void menu(){
    printf("1.Display Array values\n");
    printf("2.Enter Array values\n");
    printf("3.Enter single Array value\n");
    printf("4.Maximum value\n");
    printf("5.Minimal value\n");
    printf("6.Array Median\n");
    printf("7.Array Sum\n");
    printf("8.Save to file\n");
    printf("9.Restore from file\n");
    printf("0.EXIT\n");
}

int main() {
        int numbers[SIZE] = {1, 2, 3, 4, 5};
        int option;
        int errorcode = NULL;
        printf("Simple Array\n\n");

        do{
            menu();
            printf("Choose an option\n");
            scanf(" %d",&option);
            switch(option){
                case 0:
                    break;
                case 1:
                    showNum(numbers);
                    break;
                case 2:
                    scanNum(numbers);
                    break;
                case 3:
                    scanANum(numbers);
                    break;
                case 4:
                    printf("max value is = %d\n",maxArray(numbers));
                    break;
                case 5:
                    printf("min value is = %d\n",minArray(numbers));
                    break;
                case 6:
                    printf("how\n");
                    break;
                case 7:
                    printf("array sum = %d\n",sumNum(numbers));
                    break;
                case 8:
                    errorcode = saveToFile(numbers);
                    if (errorcode == NULL)
                    {
                        printf("All's a ok\n");
                    }
                    else
                    {
                        printf("No ok ;(\n");
                    }
                    break;
                case 9:
                    errorcode = restoreFromFile(numbers);
                    if (errorcode == NULL)
                    {
                        printf("All's a ok\n");
                    }
                    else
                    {
                        printf("No ok ;(\n");
                    }
                    break;
                default:
                    printf("Choose correct option... \n");
                    break;
            }

        }while(option != NULL);

    printf("See you next time!\n");

    return 0;
}
