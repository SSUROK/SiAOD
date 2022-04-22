//
// Created by Илья Виноградов on 01.04.2022.
//

#include "hw4.h"
#include "Arrays.h"

HW4::HW4(int len) {
    this->len = len;
    arr = Arrays::create(len);
    Arrays::quickSort(arr, 0, len, '>');
    Arrays::display(arr, len);
}

void HW4::search() {
    int key;
    cin >> key;
    auto start = chrono::system_clock::now();
    for (int i = 0; i<len; i++ ){
        sf++;
        if (arr[i] == key) {
            cout << arr[i] << " has index " << i << endl;
            break;
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end - start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf: " << sf + mf << endl;
}
