#include <iostream>
#include <math.h>  

using namespace std;

int main(int argc, char** argv) {
	
	
	
	 int total, payment, diff, rest, no;

    

    cout << "Hur mycket har du handlat för? " << endl;

    cin >> total;

    cout << "Vad betalar du i kassan ? " << endl;

    cin >> payment;

    

    //Sedlar 1000, 500, 100, 50, 20, 10, 5, 1



    

    

    if(total < 10000) {

        

        //Att betala tillbaka

        diff = payment - total;



        

        no = floor(diff/1000);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st tusenkronorsedel" << endl;

        }

        rest = diff%1000;

      

        

        no = floor(rest/500);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st femhundrasedel" << endl;

        }

        rest = rest%500;

        

        

        no = floor(rest/100);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st hundrakronorsedlar" << endl;

        }

        rest = rest%100;

        

        no = floor(rest/50);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st femtiokronorsedlar" << endl;

        }

        rest = rest%50;

       

        no = floor(rest/20);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st tjugokronorsedlar" << endl;

        }

        rest = rest%20;

        

        no = floor(rest/10);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st tia" << endl;

        }

        rest = rest%10;

        

        no = floor(rest/5);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st femma" << endl;

        }

        rest = rest%5;

        

        no = floor(rest/1);

        if(no!=0) {

        cout << "Du får tillbaka: " << no << " st krona" << endl;

        }

        rest = rest%1;

        

    } else {

        cout << "Du har överskridit största möjliga summa" << endl;

    }

    
	
	
	return 0;
}
