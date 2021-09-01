#include <utility>

//
// Created by hamthelegend on 8/30/2021.
// Copyright (c) 2021 hamthelegend. All rights reserved.
//

#ifndef DASTAL_INTARRAY_H
#define DASTAL_INTARRAY_H

const int SIZE_MULTIPLIER = 2;

template <typename T>
class Array {

public:
    std::string name;
    int size = 0;

private:
    int memorySize;
    T* array;

public:

    Array(std::string name, int size) {
        this->name = std::move(name);
        memorySize = size * SIZE_MULTIPLIER;
        this->array = new T[memorySize];
    }

    int getIndex(T element) {
        for (int i = 0; i < size; i++) {
            if (array[i] == element) {
                return i;
            }
        }
        throw std::out_of_range("Cannot find element.");
    }

    void add(int index, T element) {
        if (index > size || index < 0) {
            throw std::out_of_range("");
        }
        for (int i = size - 1; i >= index; i--) {
            array[i + 1] = array[i];
        }
        array[index] = element;
        size++;
    }

    void add(T element) {
        add(size, element);
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

    void remove(T element) {
        removeAtIndex(getIndex(element));
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << name << "[" << i << "] = " << array[i] << std::endl;
        }
    }

};


#endif //DASTAL_INTARRAY_H
