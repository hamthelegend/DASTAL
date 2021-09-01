//
// Created by hamthelegend on 8/30/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#include <bits/stdc++.h>
#include "../extensions/Array.h"
using namespace std;

int main() {
    int size;
    cout << "Enter the number of ints in your array: ";
    cin >> size;

    cout << endl << "Assign the int at each position: " << endl;
    Array<int> array("array", size);
    for (int i = 0; i < size; i++) {
        int element;
        cout << "array[" << i << "] = ";
        cin >> element;
        array.add(element);
    }
    int numberToDelete;
    cout << endl << "Enter the number to be deleted: ";
    cin >> numberToDelete;
    try {
        array.remove(numberToDelete);
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    cout << endl << "The array after deletion: " << endl;
    array.print();
}