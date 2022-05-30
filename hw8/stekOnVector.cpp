//
// Created by Илья Виноградов on 30.05.2022.
//

#include "stekOnVector.h"

StekOnVector::StekOnVector(string name, int size){
	this->name = name;
	maxSize = size;
}

int StekOnVector::getMaxSize(){
	return maxSize;
}

int StekOnVector::getActualSize(){
	return array.size();
}
string StekOnVector::getName(){
	return name;
}

bool StekOnVector::isFull(){
	return array.size() == maxSize;
}

bool StekOnVector::isEmpty(){
	return array.empty();
}

bool StekOnVector::getElement(char &to){
	if (actualSize>0){
		to = array[actualSize];
		actualSize--;
		return true;
	} else
		return false;
}

bool StekOnVector::addElement(char value){
	if(actualSize < maxSize){
		array[actualSize + 1] = value;
		actualSize++;
		return true;
	} else
		return false;
}