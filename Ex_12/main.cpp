#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int pin = 2345;
	int user_pin;
	int counter = 0;
    
		cout << "Skriv in ditt pinnummer: ";	
	    cin >>  user_pin;
	    

	while(user_pin != pin and counter < 2) {
		
		if(user_pin == pin) {
			cout << "Grattis, du får nu ta ut pengar" << endl;
			break;
		} else {
			
		cout << "Fel pin. Försök igen" << endl;		
		cout << "Skriv in ditt pinnummer: ";	
	    cin >>  user_pin;
	    counter++;
			
		}
	
		
		
		
	}

	if(counter==2 and user_pin != pin) cout << "Ditt kort är nu spärrat" << endl;
	else cout << "Grattis, du får nu ta ut pengar" << endl;


	return 0;
}


