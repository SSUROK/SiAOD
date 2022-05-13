//
// Created by Илья Виноградов on 29.04.2022.
//

#ifndef UNTITLED7_HW5_H
#define UNTITLED7_HW5_H
#include <iostream>
#include "bohr.h"
using namespace std;


class hw5 {
	string number;
	int sf = 0, mf = 0, len;
	int *arr;
	Bohr tree;

public:
	hw5(int len);
	void find();
};

#endif //UNTITLED7_HW5_H
