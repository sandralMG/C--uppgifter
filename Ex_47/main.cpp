#include <iostream>

using namespace std;

struct Boll {
	string name;
	float diameter;
	int age;
	string food;
	
} boll1, boll2;



int main(int argc, char** argv) {
	
	
	cout << "Skapa en boll! Namn, diameter, ålder, mat " << endl;
	cin >> boll1.name >> boll1.diameter >> boll1.age >> boll1.food;

	boll2 = boll1;
	
	boll1.diameter = boll2.diameter * 2;
	
	cout << "Boll1 " << boll1.name << endl << boll1.diameter << endl << boll1.age << endl << boll1.food << endl;
	cout << "Boll1 " << boll2.name << endl << boll2.diameter << endl << boll2.age << endl << boll2.food;

	
	return 0;
}
