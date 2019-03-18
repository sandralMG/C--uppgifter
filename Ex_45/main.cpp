#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
#include <string.h>

using namespace std;


int random(int min, int max) {

    int range = max-min + 1;
    int slump =  rand()%range + min;
    return slump;
}

int main(int argc, char** argv) {
	
	int yatzy[5];
	srand(time(0));
	
	//Slumpar 5 t�rningskast
	for(int i = 0; i < 5; i++) {
		yatzy[i] = random(1,6);
	}
	
	//Skriver ut omg�ng 1
	for(int i = 0; i < 5; i++) {
		cout << yatzy[i] << endl;
	}
	string input;
	string ja = "ja";
	string nej = "nej";
	int ny;
	
		cout << "Vill du sl� om en t�rning? (ja/nej)" << endl;
		cin >> input; 
		
			
		while(input.compare(nej)!=0 and input.compare(ja)!=0) {
				cout << "Skriv 'ja'' eller 'nej'" << endl;
				cin >> input;
		}
		
		
		if(input.compare("nej")==0) {
			cout << "Programmet avslutas" << endl;
			return 0;
		} 
	
	while(input.compare("ja")==0) {
		
			cout << "Vilken t�rning vill du sl� om? (1-6)" << endl;
			cin >> ny;
			while(!(ny >= 1 and ny <= 6)) {
				cout << "Skriv ett tal 1-6" << endl;
				cin >> ny;
			}
			//Slumpar ut ny t�rning p� vald plats
			yatzy[ny-1] = random(1,6);
			
			//Skriver ut n�sta omg�ng 
			for(int i = 0; i < 5; i++) {
			cout << yatzy[i] << endl;
			}
			
			cout << "Vill du sl� om en t�rning? (ja/nej)" << endl;
			cin >> input; 
			
		
		}
			
	
		
	
	

	return 0;
}
