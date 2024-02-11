// В одномерном массиве, заполненном случайными числами
// в заданном пользователем диапазоне, найти сумму элементов,
// значения которых меньше указанного пользователем.

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 100;
    int arr[size];
    int start = 0, end = 0, sum = 0;
    random_device random;

    cout << "Есть массив чисел:" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = random() % 50;
        cout << arr[i] << " " ;
    }

    cout << endl;
    cout << "Задайте диапазон (от 0 до 100) для поиска суммы элементов в массиве :" << endl;
    cin >> start >> end;

    int temp = 0;
    if (start > end) 
    {
        temp = start;
        start = end;
        end = start;
    }

    int min = arr[0], max = arr[0];

    for (int i = start; i < end; i++)
    {
        sum += arr[i];
    }

    cout << "В заданном диапазоне от " << start << " до " << end  << endl;
    cout << "Сумма чисел = " << sum << endl;
}

