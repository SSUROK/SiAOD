//
// Created by Илья Виноградов on 30.05.2022.
//

#include "variantOperatons.h"
#include <ctime>
#include <map>

void variantOperatons::insert(bank op, list<bank>& operations){
	operations.push_front(op);
}


void variantOperatons::deleteInfo(list<bank>& operations){
	list<bank>::iterator it;
	map<long, int> total = {};
	for (it = operations.begin(); it != operations.end(); it++){
		if(it->operationType == "add")
			total[it->accountNumber] += it->sum;
		else
			total[it->accountNumber] -= it->sum;
	}
	for(auto m : total){
		if(m.second == 0)
			for(it = operations.begin(); it != operations.end();){
				if(it->accountNumber == m.first)
					it = operations.erase(it);
				else
					it++;
			}
	}
}

list<bank> variantOperatons::remains(list<bank>& operations){
	list<bank>::iterator it;
	list<bank> remains;
	map<long, int> total = {};
	for (it = operations.begin(); it != operations.end(); it++){
		if(it->operationType == "add")
			total[it->accountNumber] += it->sum;
		else
			total[it->accountNumber] -= it->sum;
	}
	time_t now = time(0);
	char* dt = ctime(&now);
	for(auto t : total){
		remains.push_back({t.first, dt, "add", t.second});
	}
	return remains;
}