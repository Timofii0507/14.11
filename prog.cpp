#include "function_.h"

#define INTEGER

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	cout << "������ ����� ������: ";
	cin >> size;
	int* arr = new int[size];
	FillArray(arr, size);
	cout << "����� �� �����������:" << endl;
	ShowArray(arr, size);
	EditArray(arr, size);
	cout << "����� ���� �����������:" << endl;
	ShowArray(arr, size);
	delete[] arr;
	return 0;
}