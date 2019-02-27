#include <iostream>

using namespace std;
	
int main(int argc, char** argv) {
	
	 /*BONUSUPPGIFT 8: FOR PRO

     Figur1:

     

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8 9 */

    

    /*for(int i = 0; i < 10; i++) {

        

        for(int j = 0; j < 10; j++) {

            cout << j << " ";

        }

        cout << endl;

    }*/
    
     /*BONUSUPPGIFT 8: FOR PRO

     Figur 2

     0

     0 1

     0 1 2

     0 1 2 3

     0 1 2 3 4

     0 1 2 3 4 5

     0 1 2 3 4 5 6

     0 1 2 3 4 5 6 7

     0 1 2 3 4 5 6 7 8

     0 1 2 3 4 5 6 7 8 9  */

    /*

    for(int i = 0; i < 10; i++) {

        

        for(int j = 0; j < i; j++) {

            cout << j << " ";

        }

        cout << endl;

    }*/
    
      /*BONUSUPPGIFT 8: FOR PRO

     Figur3:

     

     0 1 2 3 4 5 6 7 8 9

     0 1 2 3 4 5 6 7 8

     0 1 2 3 4 5 6 7

     0 1 2 3 4 5 6

     0 1 2 3 4 5

     0 1 2 3 4

     0 1 2 3

     0 1 2

     0 1

     0

*/

    int length = 10;

    
    for(int i = 0; i < 10; i++) {

        
        for(int j = 0; j < length; j++) {

            cout << j << " ";

        }

        length--;

        cout << endl;

    }
	
	return 0;
}
