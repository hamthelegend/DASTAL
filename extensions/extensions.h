//
// Created by hamthelegend on 8/23/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#ifndef DASTAL_EXTENSIONS_H
#define DASTAL_EXTENSIONS_H

int scanInt() {
    int x;
    scanf("%d", &x);
    return x;
}

double scanDouble() {
    double x;
    scanf("%lf", &x);
    return x;
}

void printArray(int array[], int size, char *name) {
    for (int i = 0; i < size; i++) {
        printf("%s[%d] = %d\n", name, i, array[i]);
    }
}

#endif //DASTAL_EXTENSIONS_H
