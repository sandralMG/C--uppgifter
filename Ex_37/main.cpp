#include <iostream>

using namespace std;

float calculate(float a, float b, char op) {
	float result;
	
	if(op == '+') {
		result = a + b;
	} else if (op == '-') {
			result = a - b;
	} else if (op == '*') {
			result = a * b;
		
	} else if (op == '/') {
			result = a / b;
	} else {
		cout << "Du m�ste skriva in ett r�knes�tt: + - * / " << endl;
	}
 	return result;
}


int main(int argc, char** argv) {
	
	float a, b, result;
	char op;
	cout << "Skriv in ett tal: " << endl;
	cin >> a;
	cout << "Skriv in ett annat tal " << endl;
	cin >> b;
	cout << "Sriv in ett r�knes�tt + - * /" << endl;
	cin >> op;
	result = calculate(a,b,op);
	cout << "Svaret �r " << result << endl;
	
	return 0;
}
