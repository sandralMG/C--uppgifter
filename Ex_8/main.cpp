#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int modell, year, age;
	
	
	cout << "Skriv aktuellt år: " << endl;
	cin >> year;
	
	cout << "Vilken årsmodell är din bil: " << endl;
	cin >> modell;
	
	age = year - modell;
	
	if(age < 5) {
		cout << "Välj helförsäkring!";
	} 
	
	else if ( age < 25) {
		cout << "Välj halvförsäkring!";
	}
	
	else {
		cout << "Välj veteranförsäkring!";
	}
	
	return 0;
}
