#include "hw2.h"

// Функция "просеивания" через кучу - формирование кучи
void HW2::siftDown(int *numbers, int root, int bottom)
{
    int maxChild; // индекс максимального потомка
    bool done = false; // флаг того, что куча сформирована
    // Пока не дошли до последнего ряда
    while ((root * 2 <= bottom) && (!done))
    {
        sf++;
        if (root * 2 == bottom) {    // если мы в последнем ряду,
            maxChild = root * 2;    // запоминаем левый потомок
            // иначе запоминаем больший потомок из двух
        }else if (numbers[root * 2] > numbers[root * 2 + 1]) {
            maxChild = root * 2;
        }else {
            maxChild = root * 2 + 1;
        }
        // если элемент вершины меньше максимального потомка
        sf++;
        if (numbers[root] < numbers[maxChild])
        {
            mf++;
            int temp = numbers[root]; // меняем их местами
            numbers[root] = numbers[maxChild];
            numbers[maxChild] = temp;
            root = maxChild;
        }
        else // иначе
            done = true; // пирамида сформирована
    }
}
// Функция сортировки на куче
void HW2::heapSort(int *numbers, int array_size)
{
    // Формируем нижний ряд пирамиды
    for (int i = (array_size / 2); i >= 0; i--)
        siftDown(numbers, i, array_size - 1);
    // Просеиваем через пирамиду остальные элементы
    for (int i = array_size - 1; i >= 1; i--)
    {
        int temp = numbers[0];
        numbers[0] = numbers[i];
        numbers[i] = temp;
        siftDown(numbers, 0, i - 1);
    }
}
void HW2::run(int size)
{
    a = new int[size];
    len = size;
    srand(time(0));
    for (int i = 0; i<len; i++)
        a[i] = 1 + rand() % len;
//    for (int i = 0; i<len; i++)
//        printf("%d ", a[i]);
//    printf("\n");

    auto start = chrono::system_clock::now();

    heapSort(a, len); // вызов функции сортировки

    auto end = chrono::system_clock::now();
    chrono::duration<double, milli> elapsed_seconds = end - start;
    cout << "working time: " << elapsed_seconds.count() << "ms" << endl;
    cout << "sf + mf: " << sf + mf << endl;

//    for (int i = 0; i<len; i++)
//        printf("%d ", a[i]);
//    printf("\n");
}