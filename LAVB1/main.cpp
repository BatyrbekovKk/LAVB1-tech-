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
		cout << "1 - ���������� �������� �������" << endl << "2 - ���������� �������� �������" << endl
			<< "3 - ����� ������� �� �����" << endl << "4 - ���������� ���������� ��������" << endl
			<< "5 - �������� ����� �������" << endl << "6 - ������� ��������" << endl
			<< "7 - ����� �� ���������" << endl;
		cin >> choice;
		system("cls");
		switch (choice) {
		case(1):
			int elem;
			cout << "������� �������� �������" << endl;
			cin >> elem;
			queue.push(elem);
			cout << "������� " << elem << " ������" << endl;
			break;
		case(2):
			cout << "������� �������� " << queue.pop() << endl;
			break;
		case(3):
			queue.show();
			break;
		case(4):
			cout << "������ ����� " << queue.fun() << endl;
			break;
		case(5):
			cout << "������� �����������" << endl;
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