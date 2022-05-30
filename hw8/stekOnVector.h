//
// Created by Илья Виноградов on 30.05.2022.
//

#ifndef UNTITLED7_STEKONVECTOR_H
#define UNTITLED7_STEKONVECTOR_H

#include <iostream>
#include <vector>
using namespace std;

class StekOnVector {
	int maxSize;
	string name;
	int actualSize = 0;
	vector<char> array;
public:
	StekOnVector(string name, int size);
	int getMaxSize();
	string getName();
	bool isFull();
	bool isEmpty();
	int getActualSize();
	bool getElement(char &to);
	bool addElement(char value);
};


#endif //UNTITLED7_STEKONVECTOR_H
