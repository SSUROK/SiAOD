//
// Created by Илья Виноградов on 29.04.2022.
//

#ifndef UNTITLED7_BOHR_H
#define UNTITLED7_BOHR_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Bohr {
	 char chislo;
	 int pos;
	 vector<Bohr*> next;

public:
	Bohr(char chislo = 0, int pos = -1);
	void add(string chislo, int pos, int i = 0);
	void find(string chislo, int i = 0);
};


#endif //UNTITLED7_BOHR_H
