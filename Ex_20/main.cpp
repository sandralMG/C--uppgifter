#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	  bool run = true;

    char input;

    

    while(run) {

        cout << "Vill du avsluta programmet? Skriv (yes y /no n)" << endl;

        cin >> input;

        if(input == 'y') {

            run = false;

        } else if (input == 'n') {

            run = true;

        } else {

            cout << "Skriv yes/no";

            cin >> input;

        }

    }

    

    cout << "Programmet avslutat" << endl;
	
	return 0;
}
