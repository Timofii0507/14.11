#include "function_.h"

void FillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void ShowArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindMin(int* arr, int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int FindMax(int* arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void SortArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditArray(int* arr, int size)
{
    int index;
    cout << "Введіть індекс елемента, який потрібно відредагувати: ";
    cin >> index;
    if (index < 0 || index >= size)
    {
        cout << "Неправильний індекс" << endl;
        return;
    }

    int new_value;
    cout << "Введіть нове значення елемента: ";
    cin >> new_value;
    arr[index] = new_value;
}