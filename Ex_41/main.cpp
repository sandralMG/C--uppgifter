#include <iostream>

#include <math.h>

#include <string>

#include <cstdlib>

#include <ctime> //time() antal sekeunder sedan 1 jan 1970



using namespace std;



int random(int min, int max) {

    

    int tiden = time(0);



    srand(tiden);

    

    int range = max-min + 1;

    int slump =  rand()%range + min;

    

    return slump;

}





int main(int argc, const char * argv[]) {

    /*UPPGIFT 41: Användaren slumpar*/



    int slump, min, max;

    

    cout << "Min: " << endl;

    cin >> min;

    cout << "Max: " << endl;

    cin >> max;

    

    slump = random(min, max);

  

    cout << "Slumptalet är " << slump << endl;



    

    

    return 0;



}
