#include <iostream>



using namespace std;



int main(int argc, const char * argv[]) {

    

    /*Bonus 11: Lika v�rden?*/

    int arr[5] = {};

    bool is_same = false;

    

    

    for(int i = 0; i < 5; i++) {

        cout << "Skriv in ett tal: " << endl;

        cin >>  arr[i];

    }

    

    for(int i = 0; i < 5; i++) {

        

        for(int j = 0; j < 5; j++) {

            if(arr[i] == arr[j] ) {

                if(j!=i) {

                is_same = true;

            }

            }

        }



    }

    

    if(is_same)

        cout << "Det finns minst tv� lika tal i arrayen" << endl;

    else

        cout << "Alla tal i arrayen �r unika" << endl;

    

    for(int i = 0; i < 5; i++) {

        cout << arr[i] << endl;

    }

    

    return 0;



}
