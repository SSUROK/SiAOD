//
// Created by Илья Виноградов on 30.05.2022.
//

#include "Calculator.h"

void Calculator::CalcOne(char op, int second){
	int sum;
	switch (op){
		case '+':
			sum = first + second;
			break;
			case '-':
				sum = first - second;
				break;
				case '*':
					sum = first * second;
					break;
					case '%':
						sum = first % second;
						break;
	}
	first = sum;
}

int Calculator::CalcTwo(int first, char op, int second){
	switch (op){
		case '+':
			return first + second;
			case '-':
				return first - second;
				case '*':
					return first * second;
					case '/':
						return first / second;
	}
}

int Calculator::Out(){
	return first;
}

void Calculator::parse(string expression){
	string tmp;
	for(char operand : {'*', '/', '+', '-'}){
		while(expression.find(operand) < expression.length()) {
			int posleft, posright;
			for(int i = expression.find(operand) + 1; i < expression.length(); i++) {
				if(expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*'){
					posright = i;
					break;
				}
				posright = expression.length();
			}
			tmp = expression.substr(expression.find(operand)+1, posright-expression.find(operand)-1);
			int right = stoi(tmp);
			for(int i = expression.find(operand) - 1; i > 0; i--) {
				if(expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*'){
					posleft = i;
					break;
				}
				posleft = -1;
			}
			tmp = expression.substr(posleft+1, expression.find(operand)-posleft-1);
			int left = stoi(tmp);
			expression = expression.replace(posleft+1, posright - posleft - 1, to_string(CalcTwo(left, operand, right)));
		}
	}
	cout << expression << endl;
}
