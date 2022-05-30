//
// Created by Илья Виноградов on 30.05.2022.
//

#ifndef UNTITLED7_STEKONARRAY_H
#define UNTITLED7_STEKONARRAY_H

#include <iostream>
using namespace std;

class StekOnArray{
	int maxSize;
	string name;
	int actualSize = 0;
	int *array;
public:
	StekOnArray(string name, int size);
	int getMaxSize();
	string getName();
	bool isFull();
	bool isEmpty();
	int getActualSize();
	bool getElement(int &to);
	bool addElement(int value);
};


#endif //UNTITLED7_STEKONARRAY_H
