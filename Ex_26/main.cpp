#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	/*Uppgift 26: Finns värdet?*/

    

    int array[5] = {23, 45, 22, 20, 15};

    int heltal;

    bool gameover = false;

    

    cout << "Skriv in ett heltal mellan 0 till 100" << endl;

    

    while (cin >> heltal) {

        

        for(int i = 0; i < sizeof(array); i++) {

            if(array[i] == heltal) {

                gameover = true;

                break;

            } else {

                gameover = false;

            }

            

        }

        if(gameover)

            cout << "Grattis!!!" << endl;

        else

            cout << "Du gissade fel" << endl;

    }



    cout << "Spelet är slut" << endl;


	return 0;
}
