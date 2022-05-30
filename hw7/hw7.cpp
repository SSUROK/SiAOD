//
// Created by Илья Виноградов on 30.05.2022.
//

#include "hw7.h"
#include "variantOperatons.h"

list<int> hw7::concat(list<int> L1, list<int> L2) {
	L1.merge(L2);
	L1.unique();
	return L1;
}

void hw7::exac() {
	list <int> L1, L2;

	L1 = {1,4,5,6,7,9};
	L2 = {2,3,5,6,7,8};
	list<bank> operations = {{123, "452452", "add", 13114},
							 {123, "2342351", "minus", 13114},
							 {14234, "2452313", "add", 12314},
							 {14234, "242311", "add", 123411},
							 {14234, "2345251", "minus", 3241},
							 {23451, "2341454", "add", 1341421}};

	// Переменные
	list<int> ans1;
	list<int>::iterator it;

    // 1 Вариант
    cout << "1 variant:\n";
    ans1 = concat(L1, L2);
    for (it = ans1.begin(); it != ans1.end(); it++){
        cout << *it << endl;
    }

	variantOperatons::insert({23451, "235412", "minus", 14114}, operations);
	cout << "Show after insert" << endl;
	show('<', &operations);
	bank founded = getOperation({14234, "242311", "add", 123411}, &operations);
	cout << "Show after found " << founded.accountNumber << " " << founded.date<< " " << founded.operationType << " " << founded.sum << endl;
	variantOperatons::deleteInfo(operations);
	cout << "Show after delete" << endl;
	show('<', &operations);
	list<bank> remains = variantOperatons::remains(operations);
	cout << "Show after remains" << endl;
	show('<', &remains);
}

bank hw7::getOperation(bank op, list<bank>* listToShow) {
	bank ret;
	for(bank l : *listToShow){
		if(op.accountNumber == l.accountNumber && op.date == l.date && op.operationType == l.operationType && op.sum == l.sum) {
			ret = l;
		}
	}
	return ret;
}

void hw7::show(char direction, list<bank>* listToShow) {
	list<bank>::iterator it;
	if(direction == '<'){
		for (it = listToShow->begin(); it != listToShow->end(); it++){
			cout << it->accountNumber << " " << it->date<< " " << it->operationType << " " << it->sum << endl;
		}
	}else if(direction == '>'){
		for (it = listToShow->end(); it != listToShow->begin(); it--){
			cout << it->accountNumber << " " << it->date<< " " << it->operationType << " " << it->sum << endl;
		}
	}
}
