//
// Created by Илья Виноградов on 30.05.2022.
//

#include "stekOnArray.h"

StekOnArray::StekOnArray(string name, int size){
	this->name = name;
	maxSize = size;
	array = new int[size];
}

int StekOnArray::getMaxSize(){
	return maxSize;
}

int StekOnArray::getActualSize(){
	return actualSize;
}
string StekOnArray::getName(){
	return name;
}

bool StekOnArray::isFull(){
	return actualSize == maxSize;
}

bool StekOnArray::isEmpty(){
	return actualSize == 0;
}

bool StekOnArray::getElement(int &to){
	if (actualSize>0){
		to = array[actualSize];
		actualSize--;
		return true;
	} else
		return false;
}

bool StekOnArray::addElement(int value){
	if(actualSize < maxSize){
		array[actualSize + 1] = value;
		actualSize++;
		return true;
	} else
		return false;
}