#ifndef Graph_plan_H
#define Graph_plan_H

class Graph_plan {
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
	Graph_plan();
	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Graph_plan();
};

#endif Graph_plan_H
