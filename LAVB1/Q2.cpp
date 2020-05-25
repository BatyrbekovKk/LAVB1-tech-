#include "Q2.h"
int Q2::fun()
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

void Q2::push(int data) {
	Q::push(data);
}

int Q2::pop() {
	return Q::pop();
}

void Q2::show() {
	Q::show();
}

Q* Q2::copy() {
	return Q::copy();
}

int Q2::GetSize() {
	return Q::GetSize();
}

Q* Q2::merge(Q* first, Q* second) {
	return Q::merge(first, second);
}
