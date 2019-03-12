#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> 

using namespace std;


int random(int min, int max) {

    int tiden = time(0);

    srand(tiden);

    int range = max-min + 1;

    int slump =  rand()%range + min;


    return slump;

}

int main(int argc, char** argv) {
	
	 
	int foo[5];
	
	for(int i = 0; i < 5; i++) {
		foo[i] = random(1,6);
	}
	
	for(int i = 0; i < 5; i++) {
		cout << foo[i] << endl;
	}
	
	return 0;
}
