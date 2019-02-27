#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int timmar, overtimmar, grundlon, lon;
	
	cout << "Skriv in hur många timmar du arbetat: ";
	cin >> timmar;
	
	if(timmar > 147 and timmar < 289 ){
		
		
		//Man har arbetat 147 till 160 timmar. Timlön 100 kr
		
		if (timmar <= 160) {
			
			grundlon = timmar * 100;
			cout << "Din månadslön är " << grundlon << " kr";
			
		} 
		
		//Man har arbetat mer än 160 timmar
		 else if (timmar > 160 and timmar <= 240) {
		 	
		 	overtimmar = timmar - 160;
		 	lon = overtimmar*150 + timmar*100;
		    cout << "Din månadslön är " << lon << " kr";

		 	
		 }
		 else {
		 	cout << "Du får inte jobba mer denna månad";
		 }
		
		
		
	
		
	}  else {
		
		cout << "Du har inte arbetat giltigt antal timmar";
		
	}
   
	
	
	
	return 0;
}
