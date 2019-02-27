#include <iostream>

#include <math.h>

#include <string>



using namespace std;





int main(int argc, const char * argv[]) {

  

    /*BONUSUPPGIFT 14: Food please!

    Som i uppgift 32 fast bokstäverna M, A och T enbart accepteras enbart i just den ordningen!*/



    string mening;

    bool m = false, a = false, t = false;

    cout << "Skriv in en mening. Progammet verifierar om du har bokstäverna M, A, T ";

    getline(cin, mening);

    char c;

    char kontroll[3];

   

    for(int i = 0; i < sizeof(mening); i++) {

        c = toupper(mening[i]);

        if(c == 'M') {

            kontroll[0] = 'M';

            m = true;

            cout << "Hit!" << endl;



           }

        else if (c=='A'){

            kontroll[1] = 'A';

            a = true;



            cout << "Hit!" << endl;





        } else if (c=='T') {

            kontroll[2] = 'T';

            t = true;



            cout << "Hit!" << endl;





        } else {

            cout << "No hit" << endl;

        }

        

    }

    

    if(m and a and t) {

        cout << "Meningen inneåller M, A, T i ordning" << endl;

        

        

    } else {

        cout << "nope" << endl;

    }

    

    return 0;







}
