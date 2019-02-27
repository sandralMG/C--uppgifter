#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> //time() antal sekeunder sedan 1 jan 1970

using namespace std;

int main(int argc, char** argv) {
	/*UPPGIFT 39: Två värden*/

    int tiden = time(0);

    int slump1, slump2;

    

    srand(tiden);

  

    slump1 = rand()%10+1;

    slump2 = rand()%10+1;

    

    if(slump1 > slump1) {

        cout << slump1 << endl;

        cout << slump2 << endl;

    } else {

        cout << slump1 << endl;

        cout << slump2 << endl;



    }
	
	return 0;
}
