#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tecken; 
	float tal1, tal2, result;
	
	cout << "Skriv in ett räknesätt" << endl;
	cout << "INSTRUKTIONER: + = 1, - = 2, * = 3, / = 4" << endl;
	cin >> tecken;
	cout << "Skriv in tal 1" << endl;
	cin >> tal1;
	cout << "Skriv in tal 2" << endl;
	cin >> tal2;
	
	if(tecken == 1){
		result = tal1 + tal2;
	} 
	else if (tecken == 2){
		result = tal1 - tal2;
	} 
	else if (tecken == 3){
		result = tal1 * tal2;
	} 
	else if (tecken == 4) {
		result = tal1 / tal2;
	}
	else{
		cout << "Skriv in en siffra mellan 1-4" << endl;
	}
	
	cout << "Resultatet är: " << result;
	return 0;
}
