#include <iostream>
#include <math.h>       /* floor */

using namespace std;


int main(int argc, char** argv) {
	
	 int sevenNumbers[7], pos, ny, tmp;

    int size = 7;

    

    cout << "Mata in sju heltal" << endl;

    for(int i = 0; i < 7; i++) {

        cin >> sevenNumbers[i];

    }

    

    cout << "Skriv in ett nytt heltal" << endl;

    cin >> ny;

    

    cout << "Skriv in en position" << endl;

    cin >> pos;

    

    for(int i = size - 1; i > pos - 1; i--) {

        tmp = sevenNumbers[i-1];

        sevenNumbers[i] = tmp;

    }

    

    sevenNumbers[pos-1] = ny;

    

    cout << "Ny array:" << endl;

    for(int i = 0; i < size; i++ ) {

        cout << sevenNumbers[i] << endl;

    }

   
	return 0;
}
