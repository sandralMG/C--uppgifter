#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	string text;
	
	cout << "Skriv in en text: " << endl;
	cin >> text;
	
	for(int i = 0; i < text.length(); i++) {
		if(text[i]=='Z') {
			text[i] = 'a';
		}
		
	}
	
	cout << "Den tangentbordsfixade text: " << text;
	
	return 0;
}
