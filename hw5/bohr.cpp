//
// Created by Илья Виноградов on 29.04.2022.
//

#include "bohr.h"

Bohr::Bohr(char chislo, int pos) {
	this->chislo = chislo;
	this->pos = pos;
}

void Bohr::add(string chislo, int pos, int i) {
	if (chislo.length() == 1){
		char active = chislo[0];
		for (auto & j : next) {
			if (active == j->chislo) {
				j->pos = pos;
				return;
			}
		}
		next.push_back(new Bohr(chislo[0], pos));
		return;
	}
	if (i == chislo.length() - 1){
		char active = chislo[i];
		next.push_back(new Bohr(active, pos));
		return;
	}
	char active = chislo[i];
	for (auto & j : next) {
		if (active == j->chislo) {
			j->add(chislo, pos, i+1);
			return;
		}
	}
	next.push_back(new Bohr(active));
	next.back()->add(chislo, pos, i+1);

//	next = new bohr(chislo, pos);

}

void Bohr::find(string chislo, int i){
	if (chislo.length() == 1) {
		for (auto & j : next){
			if(j->chislo == chislo[0])
				cout << j->pos;
		}
		return;
	}
	if (i == chislo.length() - 1){
		for (auto & j : next){
			if(j->chislo == chislo[i])
				cout << j->pos;
		}
		return;
	}
	char activeNum = chislo[i];
	for (auto & j : next){
		if(j->chislo == activeNum)
			j->find(chislo, i+1);
	}
}