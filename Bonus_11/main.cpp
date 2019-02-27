#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	//

//  main.cpp

//  MGProg1

//

//  Created by Sandra Larsson on 2018-10-08.

//  Copyright © 2018 Sandra Larsson. All rights reserved.

//



#include <iostream>

#include <math.h>       /* floor */



using namespace std;





int main(int argc, const char * argv[]) {

    

    /*BONUSUPPGIFT 11: Lika värden?*/



    int array[5];

    bool is_same = false;

    

    cout << "Skriv in ett heltal mellan 0 till 100" << endl;

    

    

    for(int i = 0; i < 5; i++) {

        cin >> array[i];

    }

    

    cout << "Värdena inmatade" << endl;

    

    int i = 0;

    

    while(!is_same and i < 5) {

        

        for(int j = 0; j < 5; j++) {

            

            if(i != j and array[i] == array[j]) is_same = true;

            

        }

        

        i++;

    }

        



   if(is_same) {
   	       cout << "Något av talen var lika" << endl;

   }


    else {
    	        cout << "Talen är unika";

	}


    


	return 0;
}
