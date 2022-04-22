//
// Created by Илья Виноградов on 01.04.2022.
//

#ifndef UNTITLED7_ARRAYS_H
#define UNTITLED7_ARRAYS_H
#include<iostream>
#include <ctime>
#include <chrono>
using namespace std;

class Arrays {
    chrono::system_clock::time_point start;
public:
    static void display(int *arr, int len);
    static int* create(int len);
    chrono::system_clock::time_point startTime();
    void stopTime(int sf, int mf);
    static void quickSort(int* arr, int low, int high, char direction);
};


#endif //UNTITLED7_ARRAYS_H
