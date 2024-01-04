#include <iostream>
#include <Windows.h>
#include "functions.h"
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    cout << "Мінімум з " << num1 << " і " << num2 << " - це: " << findMin(num1, num2) << endl;
    cout << "Максимум з " << num1 << " і " << num2 << " - це: " << findMax(num1, num2) << endl;
    cout << "Квадрат числа " << num1 << " - це: " << square(num1) << endl;
    cout << num1 << " підняте в ступінь 3 дорівнює: " << power(num1, 3) << endl;
    if (isEven(num1))
        cout << num1 << " - парне число." << endl;
    else
        cout << num1 << " - непарне число." << endl;
    if (isOdd(num2))
        cout << num2 << " - непарне число." << endl;
    else
        cout << num2 << " - парне число." << endl;
    return 0;
}