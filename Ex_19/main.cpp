#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	   bool is_ten;

    int kontroll;

        

    

    cout << "Skriv in ett heltal" << endl;

    cin >> kontroll;

    

    if(kontroll == 10) {

        is_ten = true;

    } else {

        is_ten = false;

    }

    

    if(is_ten) {

        cout << "Du skrev in 10" << endl;

    } else {

        cout << "Du skrev in ett annat tal än 10" << endl;

    }
	
	return 0;
}
