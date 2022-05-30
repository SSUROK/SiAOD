//
// Created by Илья Виноградов on 30.05.2022.
//

#ifndef UNTITLED7_CALCULATOR_H
#define UNTITLED7_CALCULATOR_H
#include <iostream>
#include <string>
#include "stekOnArray.h"
#include "stekOnVector.h"
using namespace std;

class Calculator{
	int first;
public:
	int CalcTwo(int first, char op, int second);
	void CalcOne(char op, int second);
	int Out();
	void parse(string expression);
};

#endif