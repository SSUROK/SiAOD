//
// Created by Илья Виноградов on 11.03.2022.
//

#ifndef UNTITLED7_HW2_H
#define UNTITLED7_HW2_H
#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
#define M 5
#define MAXINT 32767
using namespace std;

class HW2{
    int len, sf=0, mf=0, *a;
public:
    void siftDown(int *numbers, int root, int bottom);
    void heapSort(int *numbers, int array_size);
    void run(int size);
};
#endif //UNTITLED7_HW2_H
