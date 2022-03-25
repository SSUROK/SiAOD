#include "hw1.h"

HW1::HW1() {
    cout << "enter array length" << endl;
    cin >> len;
    run();
}

void HW1::run() {
    auto start = chrono::system_clock::now();
    srand(time(0));
    for (int i = 0; i < len; i++) {
        int a = 1 + rand() % 100;
        vec.push_back(a);
    }
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            this->sf++;
            if (vec[i] > vec[j]) {
                this->mf++;
                swap(vec[i], vec[j]);
            }
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end - start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf + mf: " << sf + mf << endl;
}