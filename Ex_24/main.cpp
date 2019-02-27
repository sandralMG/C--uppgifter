#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	
	 /*UPPGIFT 24: ARRAYS 3 */

    

    int array[10], tal, n = 0;

    

    cout << "Skriv in nästa tal i arrayen" << endl;

    

    while(cin >> tal) {

    

        if(n < 10) {

            array[n] = tal;

            n++;

        } else {

            break;

        }

       

    }


    

    for(int i = 0; i < 10; i++) {

        cout << array[i] << endl;

    }
	return 0;
}
