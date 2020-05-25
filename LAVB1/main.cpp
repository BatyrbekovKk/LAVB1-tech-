#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int choice;
	Q3 queue = Q3();
	while (1) {

		system("pause");
		system("cls");
		cout << "1 - Добавление элемента очереди" << endl << "2 - Извлечение элемента очереди" << endl
			<< "3 - Вывод очереди на экран" << endl << "4 - Вычисление требуемого значения" << endl
			<< "5 - Создание копии очереди" << endl << "6 - Слияние очередей" << endl
			<< "7 - Выход из программы" << endl;
		cin >> choice;
		system("cls");
		switch (choice) {
		case(1):
			int elem;
			cout << "Введите вводимый элемент" << endl;
			cin >> elem;
			queue.push(elem);
			cout << "Элемент " << elem << " введен" << endl;
			break;
		case(2):
			cout << "Элемент извлечен " << queue.pop() << endl;
			break;
		case(3):
			queue.show();
			break;
		case(4):
			cout << "Размах равен " << queue.fun() << endl;
			break;
		case(5):
			cout << "Очередь скопирована" << endl;
			queue.copy();
			break;
		case(6):
			Q* a = queue.copy();
			Q* b = queue.copy();
			queue.merge(a, b);
			break;
		}
		if (choice == 7)
			break;
	}
}