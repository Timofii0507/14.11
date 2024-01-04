#include <iostream>
#include <Windows.h>
#include "functions.h"
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    cout << "̳���� � " << num1 << " � " << num2 << " - ��: " << findMin(num1, num2) << endl;
    cout << "�������� � " << num1 << " � " << num2 << " - ��: " << findMax(num1, num2) << endl;
    cout << "������� ����� " << num1 << " - ��: " << square(num1) << endl;
    cout << num1 << " ������ � ������ 3 �������: " << power(num1, 3) << endl;
    if (isEven(num1))
        cout << num1 << " - ����� �����." << endl;
    else
        cout << num1 << " - ������� �����." << endl;
    if (isOdd(num2))
        cout << num2 << " - ������� �����." << endl;
    else
        cout << num2 << " - ����� �����." << endl;
    return 0;
}