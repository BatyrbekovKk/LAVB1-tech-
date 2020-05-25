#include "Q3.h"
int Q3::fun()
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
	result = max - min;
	if (result < 0)
		result = -result;
	delete[] arr;
	return result;
}

void Q3::push(int data) {
	Q::push(data);
}

int Q3::pop() {
	return Q::pop();
}

void Q3::show() {
	Q::show();
}

Q* Q3::copy() {
	return Q::copy();
}

int Q3::GetSize() {
	return Q::GetSize();
}

Q* Q3::merge(Q* first, Q* second) {
	return Q::merge(first, second);
}