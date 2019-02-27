#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
    int plats1, plats2, rader;

    cout << "På vilken plats vill du börja.. 1-10?" << endl;

    cout << "Stjärna 1" << endl;

    cin >> plats1;

    cout << "Stjärna 2" << endl;

    cin >> plats2;

    cout << "Hur många rader?" << endl;

    cin >> rader;

    

    for(int i = 0; i < rader; i++) {

        

        for(int j = 0; j < 10; j++) {

            

            if(j==plats1) {

                cout << "_";

            } else if (j==plats2) {

                cout << "_";



            } else {

                cout << "*";

            }

            

            

            if(plats1 == 10) {

                plats1 = 0;

            }

            if(plats2 == 10) {

                plats2 = 0;

            }

        

            }

        plats1++;

        plats2++;

        cout << endl;

    }
	
	return 0;
}
