//
// Created by Илья Виноградов on 29.04.2022.
//

#include "hw5.h"
#include "Arrays.h"

hw5::hw5(int len) {
	this->len = len;
	arr = Arrays::create(len);
	Arrays::quickSort(arr, 0, len, '>');
	Arrays::display(arr, len);
	for (int i = 0; i < len; i++){
		string chislo = to_string(arr[i]);
		tree.add(chislo, i);
	}
}

void hw5::find() {
	string find;
	cin >> find;
	tree.find(find);
}