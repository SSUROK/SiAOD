#include <iostream>
#include <stdlib.h>
#include <vector>
#include <ctime>
#include <chrono>
using namespace std;

int main(){
    cout << "enter array length" << endl;
    int len;
    cin >> len;
    auto start = chrono::system_clock::now();
    vector<int> vec;
    int sf, mf;
    srand( time(0));
    for( int i = 0; i < len; i++){
        int a = 1 + rand() % 100;
        vec.push_back(a);
        //cout << vec[i] << " | ";
    }
    //cout << endl;

    for( int i = 0; i < len - 1; i++){
        for( int j = i + 1; j < len; j++){
            sf++;
            if (vec[i] > vec[j]){
                mf++;
                swap(vec[i], vec[j]);
            }
        }
    }

    //for( int i = 0; i < len; i++){
      //  cout << vec[i] << " | ";
    //}
    //cout << endl;
    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end-start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf + mf: " << sf+mf << endl;
}

