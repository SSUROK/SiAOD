//
// Created by Илья Виноградов on 30.05.2022.
//

#ifndef UNTITLED7_VARIANTOPERATONS_H
#define UNTITLED7_VARIANTOPERATONS_H
#include "hw7.h"

class variantOperatons {

public:
	static void insert(bank op, list<bank>& operations);
	static void deleteInfo(list<bank>& operations);
	static list<bank> remains(list<bank>& operations);
};


#endif //UNTITLED7_VARIANTOPERATONS_H
