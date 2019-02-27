#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	int tal;
	
	cout << "Ange vilken multiplikationstabell du vill skriva ut"; 

	while(cin >> tal) {
		
		if(tal <= 12){
			
			int i = 0; 
			while(i < 12) {
				cout << i << " x " << tal << " = " << (i*tal) << endl;
				i++;
			}
			
		}
		else {
			cout << "Du måste ange ett positivt tal upp till 12 " << endl; 
		}
		
		
		
	}
	
	
	return 0;
}
