#include "printer.h"
#include <iostream>
#include <fstream>
using namespace std;

printer::printer() {
	cout << "Введите производителя\n";
	cin >> proizv;
	cout << "Год выпуска\n";
	cin >> god;
	cout << "Введите цветность печати\n";
	cin >> cvet_pechati;
	cout << "Введите стоимость\n";
	cin >> stoimost;
	cout << "Введите цвет устройства\n";
	cin >> cvet_ustva;
	cout << "Введите интерфейсы\n";
	cin >> interfeci;
	cout << "Введите максимальный формат\n";
	cin >> max_format;
	cout << "Введите Скорость печати\n";
	cin >> skorost_pechati;
	cout << "Введите площадь сканирования\n";
	cin >> ploshad_skana;
}

void printer::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizv << endl;
	cout << "Год выпуска - " << god << endl;
	cout << "Цветность печати - " << cvet_pechati << endl;
	cout << "Стоимость - " << stoimost << endl;
	cout << "Цвет устройства - " << cvet_ustva << endl;
	cout << "Интерфейсы - " << interfeci << endl;
	cout << "Максимальный формат - " << max_format << endl;
	cout << "Скорость печати - " << skorost_pechati << endl;
	cout << "Площадь сканирования - " << ploshad_skana << endl << endl;
	cout << "------------------------------" << endl;
}

void printer::Vivod_in_fail() {
	ofstream file1("printer.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizv << endl;
	file1 << "Год выпуска - " << god << endl;
	file1 << "Цветность печати - " << cvet_pechati << endl;
	file1 << "Стоимость - " << stoimost << endl;
	file1 << "Цвет устройства - " << cvet_ustva << endl;
	file1 << "Интерфейсы - " << interfeci << endl;
	file1 << "Максимальный формат - " << max_format << endl;
	file1 << "Скорость печати - " << skorost_pechati << endl;
	file1 << "Площадь сканирования - " << ploshad_skana << endl << endl;
	file1 << "------------------------------" << endl;
	file1.close();
}
printer::~printer() {}
