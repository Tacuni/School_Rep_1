//
// Created by Student on 31.03.2025.
//

#ifndef UNTITLED2_ARRAY_H
#define UNTITLED2_ARRAY_H

#define SIZE 6
#define NULL 0

void scanNum(int *numbers);

void showNum(const int *numbers);

int sumNum (const int *numbers);

void scanANum(int *numbers);

int minArray(const int numbers[]);

int maxArray(const int numbers[]);

int medArray(int numbers[]);

int saveToFile(int numbers[]);

int restoreFromFile(int numbers[]);

#endif //UNTITLED2_ARRAY_H
