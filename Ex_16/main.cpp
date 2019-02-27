#include <iostream>

using namespace std;

int main(int argc, char** argv) {
		  int tal, diff;
	
	cout << "Skriv in ett tal mellan 10-20" << endl;
	
	while(cin >> tal) {
		
		if(tal > 10 and tal < 20){
			
			cout << "Med hur mycket ska talet räknas ner? " << endl;
			cin >> diff;
			
			int low = tal * -1;
			
			for(int i = tal; i > low; i = i - diff ) 
			{
			
			
				cout << i << endl;
		
			}
	}
			
		else {
			cout << "Du skrev inte ett tal mellan 10-20. Försök igen." << endl;
		}
	}
	
	return 0;
}
