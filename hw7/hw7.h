//
// Created by Илья Виноградов on 30.05.2022.
//

#ifndef UNTITLED7_HW7_H
#define UNTITLED7_HW7_H
#include <iostream>
#include <list>

using namespace std;

struct bank{
	long accountNumber;
	string date;
	string operationType;
	int sum;
};

class hw7 {
public:
	void show(char direction, list<bank>* list);
	bank getOperation(bank op, list<bank>* listToShow);
	list<int> concat(list<int> L1, list<int> L2);
	void exac();
};


#endif //UNTITLED7_HW7_H
