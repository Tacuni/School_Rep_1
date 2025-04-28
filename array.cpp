//
// Created by Student on 31.03.2025.
//
#include <iostream>
#include "array.h"

void scanNum(int *numbers) {
    for(int i=0;i<SIZE;i++) {
        printf("number[%d]=\n",i);
        scanf(" %d",(numbers+i));
    }
}

void showNum(const int *numbers){
    for(int i=0;i<SIZE;i++) {
        printf("number[%d]=%d\n",i,*(numbers+i));
    }
}

int sumNum(const int *numbers) {
    int sum = NULL;
    for(int i=0;i<SIZE;i++) {
        sum = sum + numbers[i];
    }
    return sum;
}

void scanANum(int *numbers) {
    int temp;
    printf("Which position do you wish to change");
    scanf(" %d", &temp);
    printf("number[%d]=\n",temp);
    scanf(" %d", &numbers[temp]);
    printf("number[%d]=%d\n",temp,numbers[temp]);
}

int minArray(const int numbers[]) {
    int temp = numbers[0];
    for (int i = 0; i < SIZE; i++) {
        if (temp > numbers[i]) {
            temp = numbers[i];
        } else {

        }
    }
    return temp;
}

int maxArray(const int numbers[]) {
    int temp = numbers[0];
    for (int i = 0; i < SIZE; i++) {
        if (temp > numbers[i]) {

        } else {
            temp = numbers[i];
        }
    }
    return temp;
}

int medianArray(int numbers[]){
 int tempSort = NULL;
 int temp = NULL;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                tempSort = numbers[j+1];
                numbers[j+1] = numbers[j];
                numbers[j] = tempSort;
            }
        }
        if(SIZE%2 == 1)
        {

        }
    }
return temp;
}

int saveToFile(int numbers[])
{
    FILE *fptr;
    fptr = fopen("../textSave.txt","w");
    if(fptr == NULL)
    {
        fclose(fptr);
        return 1;
    }
    else
    {
        for(int i=0; i<SIZE; i++)
        {
            fprintf(fptr,"%d\n",numbers[i]);
        }
        fclose(fptr);
        return 0;
    }
}
int restoreFromFile(int numbers[])
{
    FILE *fptr;
    fptr = fopen("../textSave.txt","r");
    if(fptr == NULL)
    {
        fclose(fptr);
        return 1;
    }
    {
        for(int i=0; i<SIZE; ++i)
        {
            if(fscanf(fptr,"%d",&numbers[i]) != 1) {
                fclose(fptr);
                return 2;
            }
        }
        fclose(fptr);
        return 0;
    }
}