//
// Created by Илья Виноградов on 24.05.2022.
//

#include "hw6.h"

hw6::hw6(string rowForSearch, int fileForSearch) {
	this->rowForSearch = rowForSearch;
	this->fileForSearch = fileForSearch;
}

int hw6::search() {
	string str;
	int pos = -1, sf = 0, mf = 0;
	bool firstSymbol = true;
	switch(fileForSearch){
		case 1:
			str = fileReader(fileOnePath);
			break;
		case 2:
			str = fileReader(fileTwoPath);
			break;
		case 3:
			str = fileReader(fileThreePath);
			break;
	}
	for(int i=0; i < str.length(); i++){
		mf++;
		for(char j : rowForSearch){
			sf++;
			char strChar = str.at(i), rowChar = j;
			if(strChar != rowChar) {
				pos = -1;
				firstSymbol = true;
				break;
			}
			if((strChar == rowChar) && firstSymbol){
				pos = i;
				firstSymbol = false;
			}
			if(strChar == rowChar)
				i++;
		}
		if(!firstSymbol)
			break;
	}
	cout << "sf = " << sf << " mf = " << mf << endl;
	return pos +1;
}

string hw6::fileReader(string filePath) {
	ifstream file;
	string output;
	file.open(filePath);
	if(file.is_open()) {
		while(file) {
			string tmp;
			getline(file, tmp);
			output += tmp;
		}
	}
	return output;
}
