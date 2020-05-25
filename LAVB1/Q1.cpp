#include "Q1.h"
int Q1::fun()
{
	int size = GetSize();
	int* arr = new int[size];
	int i = 0;
	for (i = 0; i < size; i++) {
		int save = pop();
		arr[i] = save;
		this->push(save);
	}
	int max = arr[0], min = arr[0], result;
	for (i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	if (max < 0) {
		max = -max;
	}
	if (min < 0) {
		min = -min;
	}
	result = max - min;
	delete[] arr;
	return result;
}