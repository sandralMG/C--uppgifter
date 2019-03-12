#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> 

int random(int min, int max) {


    int tiden = time(0);

    srand(tiden);

    int range = max-min + 1;

    int slump =  rand()%range + min;    

    return slump;

}

using namespace std;

int main(int argc, char** argv) {
	
	    /*UPPGIFT 43: Restart*/



    int slump, userchoice, counter = 0;

    bool gameloop = true;

    bool run = true;
 	int ai;
    

    while(run) {

    
    cout << "Du ska gissa vilket tal som datorn slumpat fram. 5 f�rs�k. Varje g�ng f�r du ledtr�d. H�gre eller l�gre" << endl;


    slump = random(1, 100);
    
  
    while(gameloop) {

    
        cin >> userchoice;
   

        if(userchoice == slump) {

            cout << "YOU WIN" << endl;

            gameloop = false;

        } else if (userchoice > slump) {

            cout << "Du gissade f�r h�gt" << endl;
            ai = random(1, slump);


        } else if (userchoice < slump) {

            cout << "Du gissade f�r l�gt" << endl;
            ai = random(slump, 100);

        }

        else {

            cout << "Error" << endl;

        }
        
           
         cout << "AI gissade p� " << ai << endl;
        
          if(ai == slump) {

            cout << "AI WIN" << endl;

            gameloop = false;

        } else if (ai > slump) {

            cout << "AI gissade f�r h�gt" << endl;

        } else if (ai < slump) {

            cout << "AI gissade f�r l�gt" << endl;

        }

        else {

                cout << "Error" << endl;

        }

        if(counter == 4) gameloop = false;

        counter++;

    }

    

   	    cout << "Det hemliga v�rdet var: " << slump << endl;

        char choice;

        cout << "Vill du spela igen? Skriv y/n" << endl;

        cin >> choice;

        if(choice == 'y') {

            run = true;

            gameloop = true;

        }

        else if (choice == 'n') run = false;

        else cout << "Skriv y/n";


    }

    cout << "Programmet avslutas" << endl;

  
	return 0;
}
