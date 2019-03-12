#include <iostream>
#include <math.h>

using namespace std;

float pythagoras(char input, float a, float b) {
	
	float result;
	cout << input;
	if(input == 'h') {
	result = sqrt(a*a + b*b);
	} else if(input == 'k') {
	 result = sqrt(a*a - b*b);
	} else {
		cout << "Error" << endl;
	}
	
	cout << "Svaret: " << result;
}

int main(int argc, char** argv) {
	
	float a, b;
	char input;
	
	cout << "Pythagoras sats. Vill du beräkna hypotenusa (=h) eller katet (=k)" << endl;
	cin >> input;


	cout << "Ange katet/hypotenus" << endl;
	cin >> a;
	cout << "Ange andra kateten" << endl;
	cin >> b;

	pythagoras(input, a, b);
	
	return 0;
}
