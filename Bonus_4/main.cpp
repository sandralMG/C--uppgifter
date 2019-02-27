#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	float tal1, tal2, diff;
	
	cout << "Skriv in tal1: " << endl;
	cin >> tal1;
	
 	cout << "Skriv in tal2: " << endl;
	cin >> tal2;
	
	diff = tal1 - tal2;
	
	if(diff < 0 ) {
		diff = diff * -1;
	}
	
	if(diff < 10 and diff > 0 ) {
		cout << "Close but not cigar!";
		
	
	} else	if (tal1 == tal2) {
			cout << "Grattis!";
		} 
	
	else {
		cout << "Not even close!";
	}
	
	
	return 0;
}
