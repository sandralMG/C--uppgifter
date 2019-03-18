#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
#include <string.h>

using namespace std;


int random(int min, int max) {

    int range = max-min + 1;
    int slump =  rand()%range + min;
    return slump;
}

int main(int argc, char** argv) {
	
	int yatzy[5];
	srand(time(0));
	
	//Slumpar 5 tärningskast
	for(int i = 0; i < 5; i++) {
		yatzy[i] = random(1,6);
	}
	
	//Skriver ut omgång 1
	for(int i = 0; i < 5; i++) {
		cout << yatzy[i] << endl;
	}
	
	return 0;	
}
