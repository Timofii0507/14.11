#include "function_.h"

#define INTEGER

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	cout << "Введіть розмір масиву: ";
	cin >> size;
	int* arr = new int[size];
	FillArray(arr, size);
	cout << "Масив до редагування:" << endl;
	ShowArray(arr, size);
	EditArray(arr, size);
	cout << "Масив після редагування:" << endl;
	ShowArray(arr, size);
	delete[] arr;
	return 0;
}