#include "printer.h"
#include "skaner.h"
#include "mfu.h"
#include "Graph_plan.h"
#include "Pereferia.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

Pereferia::Pereferia() {}

void Pereferia::Create_Pereferia() {
	cout << "Выберите устройство:\n";
	cout << "|1| - Принтер\n";
	cout << "|2| - Сканер\n";
	cout << "|3| - МФУ\n";
	cout << "|4| - Графический планшет\n";
	cin >> peref;
	switch (peref) {
	case 1: {
		printer * per = new printer();
		per->Vivod_in_not_fail();
		per->Vivod_in_fail();
		delete per;
		break;
	}
	case 2: {
		skaner * per = new skaner();
		per->Vivod_in_not_fail();
		per->Vivod_in_fail();
		delete per;
		break;
	}
	case 3: {
		mfu * per = new mfu();
		per->Vivod_in_not_fail();
		per->Vivod_in_fail();
		delete per;
		break;
	}
	case 4: {
		Graph_plan * per = new Graph_plan();
		per->Vivod_in_not_fail();
		per->Vivod_in_fail();
		delete per;
		break;
	}
	case 0: break;
	}
}

void Pereferia::Read() {
	cout << "Вы хотите загрузить конкретного устройство или все сразу:\n";
	cout << "|1| - Конкретное\n";
	cout << "|2| - Все сразу\n";
	cin >> peref;
	switch (peref) {
	case 1: {
		cout << "Выберите устройство:\n";
		cout << "|1| - Принтер\n";
		cout << "|2| - Сканер\n";
		cout << "|3| - МФУ\n";
		cout << "|4| - Графический планшет\n";
		
		cin >> peref;
		switch (peref) {
		case 1: cout << "\n\tПринтеры\n"; Read("printer.txt"); break;
		case 2: cout << "\n\tСканеры\n"; Read("skaner.txt"); break;
		case 3: cout << "\n\tМФУ\n"; Read("mfu.txt"); break;
		case 4: cout << "\n\tГрафические планшеты\n"; Read("Graph_plan.txt"); break;
		}
		break;
	}
	case 2: {
		cout << "\n\tПринтеры\n"; Read("printer.txt");
		cout << "\n\tСканеры\n"; Read("skaner.txt");
		cout << "\n\tМФУ\n"; Read("mfu.txt");
		cout << "\n\tГрафические планшеты\n"; Read("Graph_plan.txt");
		break;
	}
	}
}

void Pereferia::Read(const char name1[]) {
	ifstream file2(name1, ios_base::in);
	while (!file2.eof()) {
		file2 >> qqqq;
		if (qqqq == '.') cout << endl;
		else if (qqqq == '\32') cout << " ";
		else {
			if (qqqq != '-') {
				if (qqqq == 'Т' || qqqq == 'П' || qqqq == 'К' || qqqq == 'Ц' || qqqq == 'Д' || qqqq == 'В')
					cout << endl;
				cout << qqqq;
			}
			else cout << " " << qqqq << " " ;
		}
	}
	file2.close();
}

Pereferia::~Pereferia() {
	cout << "Конец работы!";
}
