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

    

    cout << "Du ska gissa vilket tal som datorn slumpat fram. 5 försök. Varje gång får du ledtråd. Högre eller lägre" << endl;

    

    slump = random(1, 100);

    

    while(gameloop) {

        

        cin >> userchoice;

        

        if(userchoice == slump) {

            cout << "YOU WIN" << endl;

            gameloop = false;

        } else if (userchoice > slump) {

            cout << "Du gissade för högt" << endl;

        } else if (userchoice < slump) {

            cout << "Du gissade för lågt" << endl;



        }

        else {

                cout << "Error" << endl;

        }

        if(counter == 4) gameloop = false;

        counter++;

    }

    

    cout << "Det hemliga värdet var: " << slump << endl;

    

    return 0;



}


