#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	 /*Uppgift 25: Arraykontroller*/

    

    int  tal, n = 0, sum = 0, size = 7;

    int array[size];


    cout << "Skriv in nästa tal i arrayen" << endl;

    

    while(cin >> tal) {

    

        if(n < size) {

            

            array[n] = tal;

            

            n++;

            

        } else {

            

            break;

            

        }

                

    }

    

    for(int i = 0; i < size; i++) {

        sum = sum + array[i];

    }

    

    cout << "Summan av talen är" << sum << endl;
	return 0;
}
