#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int rader;



    cout <<  "Hur många rader vill du skriva?";

    cin >> rader;

    

    for(int i=0; i < rader; i++) {
	
	       cout << "Baa";



        for(int j=0; j < i; j++) {

            cout << ", Baa";



        }

        

        cout << endl;

        

    }
	
	
	return 0;
}
