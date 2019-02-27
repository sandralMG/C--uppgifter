#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	string text;
	bool M = false;
	bool m = false;
	bool A = false;
	bool a = false;
	bool T = false;
	bool t = false;
	
	cout << "Skriv in en text!" << endl;
	
	getline(cin, text);
	
	for(int i = 0; i < text.length(); i++) {
		
		if(text[i]=='M') {
			M = true;
		}
			if(text[i]=='m') {
			m = true;
		}
			if(text[i]=='A') {
			A = true;
		}
			if(text[i]=='a') {
			a = true;
		}
			if(text[i]=='T') {
			T = true;
		}
			if(text[i]=='t') {
			t = true;
		}
	
	
		
	}
	
		if((M or m) and (A or a) and (T or T)) {
			cout << "MAT" << endl;
		} else {
			cout << "INGEN MAT" << endl;
		}
	
	return 0;
}
