#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	   string namn;



    cout << "Skriv n ditt namn: " << endl;

    cin >> namn;

    

    namn[0] = 'Z';

    

    cout << namn;
	
	return 0;
}
