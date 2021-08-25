//
// Created by hamthelegend on 8/25/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include "../extensions/extensions.h"

int main() {
    int array[128];
    printf("Enter the number of elements in the array: ");
    int size = scanInt();
    printf("Enter the numbers in ascending order: \n");
    for (int i = 0; i < size; i++) {
        printf("array[%d] = ", i);
        array[i] = scanInt();
    }
    printf("Enter the number to be inserted: ");
    int numberToInsert = scanInt();
    int i = size - 1;
    while (true) {
        if (numberToInsert >= array[i] || i < 0) {
            array[i + 1] = numberToInsert;
            break;
        }
        array[i + 1] = array[i];
        i--;
    }
    size++;
    printf("The array after inserting %d is: \n", numberToInsert);
    printArray(array, size, "array");
}