//
// Created by Илья Виноградов on 25.03.2022.
//

#include "hw3.h"

void HW3::merge(int *array, int l, int m, int r) {
    int i, j, k, nl, nr;
    //размеры правого и левого подмассивов
    nl = m-l+1; nr = r-m;
    int larr[nl], rarr[nr];
    //заполнение подмассивов
    for(i = 0; i<nl; i++)
        larr[i] = array[l+i];
    for(j = 0; j<nr; j++)
        rarr[j] = array[m+1+j];
    i = 0; j = 0; k = l;
    //слияние подмассивов
    while(i < nl && j<nr) {
        sf++;
        if(larr[i] <= rarr[j]) {
            mf++;
            array[k] = larr[i];
            i++;
        }else{
            mf++;
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while(i<nl) {
        array[k] = larr[i];
        i++; k++;
    }
    while(j<nr) {
        array[k] = rarr[j];
        j++; k++;
    }
}
void HW3::mergeSort(int *array, int l, int r) {
    int m;
    if(l < r) {
        m = l+(r-l)/2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}

void HW3::run() {
    int *arr = new int[len];
    srand(time(0));
    for (int i = 0; i<len; i++)
        arr[i] = 1 + rand() % len;

//    cout << "Array before Sorting: ";
//    display(arr, len);

    auto start = chrono::system_clock::now();
    mergeSort(arr, 0, len-1);     //(n-1) for last index
    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end - start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf + mf: " << sf + mf << endl;

//    cout << "Array after Sorting: ";
//    display(arr, len);
}

HW3::HW3(int size) {
    len = size;
    run();
}