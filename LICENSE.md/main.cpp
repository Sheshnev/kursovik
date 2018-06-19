#include "Pereferia.h"
#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Pereferia s;
	int button = 1;
	while (button) {
		cout << "Выберите действие:\n";
		cout << "|1| - Создать устройство\n";
		cout << "|2| - Загрузить устройства из файлов\n";
		cout << "|0| - Выход.\n";
		cin >> button;
		switch (button) {
		case 1: s.Create_Pereferia(); break;
		case 2: s.Read(); break;
		case 0: break;
		}
	}
	return 0;
}

