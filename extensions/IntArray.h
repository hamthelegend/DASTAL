#include <utility>

//
// Created by hamthelegend on 8/30/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#ifndef DASTAL_INTARRAY_H
#define DASTAL_INTARRAY_H

const int SIZE_MULTIPLIER = 2;

class IntArray {
public:
    std::string name;
    int size = 0;
private:
    int memorySize;
    int* array;
public:
    IntArray(std::string name, int size) {
        this->name = std::move(name);
        memorySize = size * SIZE_MULTIPLIER;
        this->array = new int[memorySize];
    }
    void doubleSize() {
        int* newArray = new int [memorySize * SIZE_MULTIPLIER];
        for (int i = 0; i < size; i++) {
            newArray[size] = array[size];
        }
        delete [] array;
        this->array = newArray;
    }
    int getIndex(int element) {
        for (int i = 0; i < size; i++) {
            if (array[i] == element) {
                return i;
            }
        }
        return -1;
    }
    void add(int index, int element) {
        if (index > size || index < 0) {
            throw std::out_of_range("");
        }
        if (size + 1 > memorySize) {
            doubleSize();
        }
        for (int i = size - 1; i >= index; i--) {
            array[i + 1] = array[i];
        }
        array[index] = element;
        size++;
    }
    void removeAtIndex(int index) {
        if (index > size - 1 || index < 0) {
            throw std::out_of_range("");
        }
        for (int i = index; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        size--;
    }
    void remove(int element) {
        removeAtIndex(getIndex(element));
    }
    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << name << "[" << i << "] = " << array[i] << std::endl;
        }
    }
};


#endif //DASTAL_INTARRAY_H
