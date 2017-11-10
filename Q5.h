#include <iostream>
using namespace std;
#ifndef Q5_H
#define Q5_H
class ZooAnimal
{
	private:
	int cageNumber;
	int weightDate;
	int weight;
	public:
	char *name;
	void Destroy();
	char* reptName();
	void create (char, int, int, int);
	int daysSinceLastWeighed (int today);
};
#endif

