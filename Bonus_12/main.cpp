#include <iostream>



using namespace std;



int main(int argc, const char * argv[]) {

    

    /*Bonus 12: Instickare*/

    int arr[7] = {};

    int ny;

    int position;

    int tmp;

    

    for(int i = 0; i < 7; i++) {

        cout << "Skriv in ett tal för array pos: " << i << endl;

        cin >>  arr[i];

    }

    

    cout << "Skriv in ett nytt heltal" << endl;

    cin >> ny;

    

    cout << "Vilken position 0-6 ska det nya värdet in på?" << endl;

    cin >> position;

    

    //Skriver ut arrayen

    cout << "Gamla arrayen: " << endl;

    for(int i = 0; i < 7; i++) {

        cout <<  arr[i] << endl;

    }

    // 1 2 3 4 5 6 7

    // 1 n 2 3 4 5 6

    tmp = arr[position];

    

    for(int i = 7; i > position; i--) {

        arr[i] = arr[i-1];

    }

   

    arr[position] = ny;

    

    //Skriver ut arrayen

    cout << "Nya arrayen: " << endl;

    for(int i = 0; i < 7; i++) {

        cout <<  arr[i] << endl;

    }

    

    return 0;



}


