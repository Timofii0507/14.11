#ifndef FUNCTION__H
#define FUNCTION__H

#include <iostream>
#include <Windows.h>

using namespace std;

#ifdef INTEGER
#define show ShowInt
#endif

#ifdef DOUBLE
#define show ShowDouble
#endif

#ifdef CHAR
#define show ShowChar
#endif

void FillArray(int* arr, int size);
void ShowArray(int* arr, int size);
int FindMin(int* arr, int size);
int FindMax(int* arr, int size);
void SortArray(int* arr, int size);
void EditArray(int* arr, int size);

#endif