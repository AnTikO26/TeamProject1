#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	int x, operation, s;
	do{
		cout << "������� ���������� a: ";
		cin >> a;
		cout << "������� ���������� b: ";
		cin >> b;

		system("cls");

		cout << "�������� ��������:" << endl;
		cout << "------------------------" << endl;
		cout << "1. a + b" << endl;
		cout << "2. a - b" << endl;
		cout << "0. ��������� ������" << endl;
		cout << "------------------------" << endl;
		cout << "��������: ";
		cin >> operation;

		system("cls");

		switch (operation)
		{
		case 1:
			cout << "a + b = ";
			cout << MySum(a, b) << endl;
			cout << "������� 1 ����� ��������� � ����, 0 ����� ������� ���������: ";
			cin >> s;
			system("cls");
			break;
		case 2:
			cout << "a - b = ";
			cout << MySub(a, b) << endl;
			cout << "������� 1 ����� ��������� � ����, 0 ����� ������� ���������: ";
			cin >> s;
			system("cls");
		}

	} while (s != 0);
	system("pause");
	return 0;
}