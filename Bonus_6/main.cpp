#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	 int plats;

    cout << "P� vilken plats vill du b�rja.. 1-10?" << endl;

    cin >> plats;

    

    for(int i = 0; i < 6; i++) {

        

        for(int j = 0; j < 10; j++) {

            

            if(j==plats) {

                cout << "_";

            } else {

                cout << "*";

            }

            

            if(plats == 10) {

                plats = 0;

            }

        

            }

        plats++;

        cout << endl;

    }
	return 0;
}
