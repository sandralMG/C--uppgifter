#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int timmar, overtimmar, grundlon, lon;
	
	cout << "Skriv in hur m�nga timmar du arbetat: ";
	cin >> timmar;
	
	if(timmar > 147 and timmar < 289 ){
		
		
		//Man har arbetat 147 till 160 timmar. Timl�n 100 kr
		
		if (timmar <= 160) {
			
			grundlon = timmar * 100;
			cout << "Din m�nadsl�n �r " << grundlon << " kr";
			
		} 
		
		//Man har arbetat mer �n 160 timmar
		 else if (timmar > 160 and timmar <= 240) {
		 	
		 	overtimmar = timmar - 160;
		 	lon = overtimmar*150 + timmar*100;
		    cout << "Din m�nadsl�n �r " << lon << " kr";

		 	
		 }
		 else {
		 	cout << "Du f�r inte jobba mer denna m�nad";
		 }
		
		
		
	
		
	}  else {
		
		cout << "Du har inte arbetat giltigt antal timmar";
		
	}
   
	
	
	
	return 0;
}
