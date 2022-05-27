//
// Created by Илья Виноградов on 24.05.2022.
//

#ifndef UNTITLED7_HW6_H
#define UNTITLED7_HW6_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class hw6 {
	string fileOnePath = "/Users/ilavinogradov/CLionProjects/untitled7/hw6/firstFile.txt";
	string fileTwoPath = "/Users/ilavinogradov/CLionProjects/untitled7/hw6/secondFile.txt";
	string fileThreePath = "/Users/ilavinogradov/CLionProjects/untitled7/hw6/thirdFile.txt";
	string rowForSearch;
	int fileForSearch;

public:
	hw6(string rowForSearch, int fileForSearch);
	string fileReader(string filePath);
	int search();

};


#endif //UNTITLED7_HW6_H
