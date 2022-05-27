#include <iostream>
#include <stdlib.h>
#include <iostream>
#include "hw1.h"
#include "hw2.h"
#include "hw3.h"
#include "hw4.h"
#include "hw5.h"
#include "hw6.h"
using namespace std;

int main(){
    cout << "hello  world"  << endl;
    //HW1 hw1;
//    HW2 hw2;
//    hw2.run(1000000);
//    HW3 hw3(100);
//    HW4 hw4(100);
//    hw4.search();
//	hw5 hw5(100);
//	hw5.find();
	hw6 hw6("Empress by her sister", 1);
	cout << hw6.search() << endl;
    return 0;
}

