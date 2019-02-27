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

    

    /*UPPGIFT 42: Gissningsspel*/



    int slump, userchoice, counter = 0;

    bool gameloop = true;

    

    cout << "Du ska gissa vilket tal som datorn slumpat fram. 5 f�rs�k. Varje g�ng f�r du ledtr�d. H�gre eller l�gre" << endl;

    

    slump = random(1, 100);

    

    while(gameloop) {

        

        cin >> userchoice;

        

        if(userchoice == slump) {

            cout << "YOU WIN" << endl;

            gameloop = false;

        } else if (userchoice > slump) {

            cout << "Du gissade f�r h�gt" << endl;

        } else if (userchoice < slump) {

            cout << "Du gissade f�r l�gt" << endl;



        }

        else {

                cout << "Error" << endl;

        }

        if(counter == 4) gameloop = false;

        counter++;

    }

    

    cout << "Det hemliga v�rdet var: " << slump << endl;

    

    return 0;



}


