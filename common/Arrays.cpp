//
// Created by Илья Виноградов on 01.04.2022.
//

#include "Arrays.h"

void Arrays::display(int *array, int size) {
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int* Arrays::create(int len){
    int *arr = new int[len];
    srand(time(0));
    for (int i = 0; i<len; i++)
        arr[i] = 1 + rand() % len;
    return arr;
};

chrono::system_clock::time_point Arrays::startTime() {
    start = chrono::system_clock::now();
    return start;
}

void Arrays::stopTime(int sf, int mf) {
    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end - start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf + mf: " << sf + mf << endl;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int Arrays::partition (int* arr, int low, int high, char direction)
{
    if (direction == '<'){
		int pivot = arr[high]; // pivot
		int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

		for (int j = low; j <= high - 1; j++)
		{
			sf++;
			// If current element is smaller than the pivot
			if (arr[j] < pivot)
			{
				mf++;
				i++; // increment index of smaller element
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[i + 1], &arr[high]);
		return (i + 1);
    } else if (direction == '>'){
		int pivot = arr[high]; // pivot
		int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

		for (int j = low; j <= high - 1; j++)
		{
			sf++;
			// If current element is smaller than the pivot
			if (arr[j] > pivot)
			{
				mf++;
				i++; // increment index of smaller element
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[i + 1], &arr[high]);
		return (i + 1);
    }
}

int Arrays::quickSort(int* arr, int low, int high, char direction) {
		if (low < high)
		{
			/* pi is partitioning index, arr[p] is now
			at right place */
			int pi = partition(arr, low, high, direction);

			// Separately sort elements before
			// partition and after partition
			quickSort(arr, low, pi - 1, direction);
			quickSort(arr, pi + 1, high, direction);
		}
	return mf + sf;
}
