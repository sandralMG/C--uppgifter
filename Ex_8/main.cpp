#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int modell, year, age;
	
	
	cout << "Skriv aktuellt �r: " << endl;
	cin >> year;
	
	cout << "Vilken �rsmodell �r din bil: " << endl;
	cin >> modell;
	
	age = year - modell;
	
	if(age < 5) {
		cout << "V�lj helf�rs�kring!";
	} 
	
	else if ( age < 25) {
		cout << "V�lj halvf�rs�kring!";
	}
	
	else {
		cout << "V�lj veteranf�rs�kring!";
	}
	
	return 0;
}
