#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

struct Boll {
	float radie;
	float vikt;
	string color;
	int x;
	int y;
	
};


int random(int min, int max) {

    srand(time(0));
    int range = max-min + 1;
    int slump =  rand()%range + min;
    return slump;

}

Boll newPosition(Boll boll, int x, int y) {
	if(x > 0 and x <= 10 and y > 0 and y <= 10) {
		boll.x = x;
		boll.y = y;
	}	else {
		cout << "Ange koordinater mellan 0 och 10" << endl;
	}
	return boll;
}

void move(Boll boll) {
	
	system("cls");
		cout << "-----------------------------" << endl;
		
		for (int i = 0; i < boll.x; i++) { // går ned så många y som behövs
		cout << endl;
		}
		for (int i = 0; i < boll.y; i++) { // går åt sidan så många x som behövs
		cout << " ";
		}
		
		cout << "O" << endl;
		cout << "-----------------------------" << endl;
}




int main(int argc, char** argv) {
	
	Boll boll;
	string input;
	bool run = true;
	cout << "Välkommen till Boll förflyttning!" << endl;
	cout << "Plats slumpas...please wait" << endl;
	Sleep(2000);

	boll.x = random(1,10);
	boll.y = random(1,10);

	move(boll);

	cout << "Vill du ange en ny position? (yes/no)" << endl;
	
	while(run) {
		cin >> input;
		if(input =="yes") {
			int x,y;
			cout << "Ange x:" << endl;
			cin >> x;
			cout << "Ange y:" << endl;
			cin >> y;
			boll = newPosition(boll, x, y);
			move(boll);
		} else {
			return 0;
		}
	}
	return 0;
}
