//
// Created by hamthelegend on 8/30/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#include <bits/stdc++.h>
#include "../extensions/IntArray.h"
using namespace std;

int main() {
    int size;
    cout << "Enter the number of ints in your array: ";
    cin >> size;

    cout << endl << "Assign the int at each position: " << endl;
    IntArray array("array", size);
    for (int i = 0; i < size; i++) {
        int element;
        cout << "array[" << i << "] = ";
        cin >> element;
        array.add(i, element);
    }
    int numberToDelete;
    cout << endl << "Enter the number to be deleted: ";
    cin >> numberToDelete;
    array.remove(numberToDelete);
    cout << endl << "The array after deletion: " << endl;
    array.print();
}