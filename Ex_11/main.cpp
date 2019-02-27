#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	
	cout << "Skriv in ett tal som ska räkna ner: " << endl;
	cin >> tal;
	
	while(tal >= 0) {
		
		cout << tal << endl;
		tal = tal - 1;
		
	}
	
	
	return 0;

}
