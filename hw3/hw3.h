//
// Created by Илья Виноградов on 25.03.2022.
//

#ifndef UNTITLED7_HW3_H
#define UNTITLED7_HW3_H
#include<iostream>
#include <ctime>
#include <chrono>
using namespace std;

class HW3 {
    int sf, mf, len;
    public:
        HW3(int size);
        void run();
        void merge(int *array, int l, int m, int r);
        void mergeSort(int *array, int l, int r);
        void display(int *array, int size);
};


#endif //UNTITLED7_HW3_H
