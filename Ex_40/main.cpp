#include <iostream>
#include <math.h>

#include <string>

#include <cstdlib>

#include <ctime> //time() antal sekeunder sedan 1 jan 1970

using namespace std;

int main(int argc, char** argv) {
	
	/*UPPGIFT 40: Anv�ndaren slumpar*/



    int tiden = time(0);

    int slump, min, max;

    

    cout << "Min: " << endl;

    cin >> min;

    cout << "Max: " << endl;

    cin >> max;

    

    srand(tiden);

  

   int range = max-min + 1;

    slump =  rand()%range + min;

  

    cout << "Slumptalet �r " << slump << endl;
	return 0;
}
