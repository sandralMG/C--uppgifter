#include <iostream>
#include <string>

using namespace std;

string abbaMaker(string a, string b) {
	
	string result;
	result = a + b + b + a;
	return result;
}

int main(int argc, char** argv) {
	
	string ord1, ord2, result;
	cout << "Skriv in f�rsta ordet " << endl;
	cin >> ord1;
	cout << "Skriv in andra ordet " << endl;
	cin >> ord2;
	
	result = abbaMaker(ord1, ord2);
	
	cout << "Ordet �r :" << result;
	
	return 0;
}


