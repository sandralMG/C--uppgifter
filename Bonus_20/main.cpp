#include <iostream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

int fromString( string s )        // takes a string s and returns an integer equivalent
{
   int value;                     // this will hold the final integer value
   stringstream ss( s );          // create a stringstream from s ... this is like writing s to a "file" or cout,
	ss >> value;                   // now read back from the stringstream, but this time into the integer value
   return value;                  // return this integer from the program
}

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
	int nya_slag;
	
		cout << "Vill du sl� om en t�rning? (ja/nej)" << endl;
		cin >> input; 

		while(input.compare(nej)!=0 and input.compare(ja)!=0) {
				cout << "Skriv 'ja'' eller 'nej'" << endl;
				cin >> input;
		}
		

		
		if(input.compare(nej)==0) {
			cout << "Programmet avslutas" << endl;
			return 0;
		} 
	
		while(input.compare(ja)==0) {
	
			string str;
			cout << "Vilken t�rning vill du sl� om? (1-6)" << endl;
			cin >> str;
		    stringstream in(str);
			vector<string> numbers;
			int i = 0;
			string token;
			int dice;
			
    	while (getline(in, token,',')){

                //Push each token to the vector
                numbers.push_back(token);
                cout << numbers[i];
                i++;
            }

			cout << "Antal omkast" << numbers.size();
			
			//Sl�r om t�rning		
		for(int i = 0; i < numbers.size(); i++) { 
			dice = fromString(numbers[i]);
			yatzy[dice] = random(1,6);
			}

			cout << endl;

			//Skriver ut n�sta omg�ng 
			for(int i = 0; i < 5; i++) {
			cout << yatzy[i] << endl;
			}
			
			cout << "Vill du sl� om en t�rning? (ja/nej)" << endl;
			cin >> input; 
			
		
		}
			
	
	return 0;
}

