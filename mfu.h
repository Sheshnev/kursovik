#ifndef mfu_H
#define mfu_H

class mfu {
	char proizv[20];
	int god;
	char cvet_pechati[20];
	int stoimost;
	char cvet_ustva[20];
	char interfeci[20];
	int max_format;
	int skorost_pechati;
	int ploshad_skana;

public:
	mfu();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~mfu();
};

#endif mfu_H
