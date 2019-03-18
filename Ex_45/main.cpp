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
	
	//Slumpar 5 tärningskast
	for(int i = 0; i < 5; i++) {
		yatzy[i] = random(1,6);
	}
	
	//Skriver ut omgång 1
	for(int i = 0; i < 5; i++) {
		cout << yatzy[i] << endl;
	}
	string input;
	string ja = "ja";
	string nej = "nej";
	int ny;
	
		cout << "Vill du slå om en tärning? (ja/nej)" << endl;
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
		
			cout << "Vilken tärning vill du slå om? (1-6)" << endl;
			cin >> ny;
			while(!(ny >= 1 and ny <= 6)) {
				cout << "Skriv ett tal 1-6" << endl;
				cin >> ny;
			}
			//Slumpar ut ny tärning på vald plats
			yatzy[ny-1] = random(1,6);
			
			//Skriver ut nästa omgång 
			for(int i = 0; i < 5; i++) {
			cout << yatzy[i] << endl;
			}
			
			cout << "Vill du slå om en tärning? (ja/nej)" << endl;
			cin >> input; 
			
		
		}
			
	
		
	
	

	return 0;
}
