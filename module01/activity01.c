//
// Created by hamthelegend on 8/23/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#include <stdio.h>
#include "../extensions/extensions.h"

int main() {
    printf("Enter the amount of elements in the array: ");
    int size = scanInt();
    int array[size];
    for (int i = 0; i < size; i++) {
        printf("array[%d] = ", i);
        array[i] = scanInt();
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    printf("The sum of the array elements = %d", sum);
}

