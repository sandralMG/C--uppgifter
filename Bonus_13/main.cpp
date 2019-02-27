#include <iostream>



using namespace std;



int main(int argc, const char * argv[]) {

    

    /*Bonus 13: Ökar/Sjunker*/

    int arr[10] = {};

    int fluct[10] = {};

    bool increase = false;

    bool decrease = false;

    bool nochange = false;

    bool both = false;

    

    for(int i = 0; i < 10; i++) {

        cout << "Skriv in ett tal för array pos: " << i << endl;

        cin >>  arr[i];

    }

    

    //1 = inc, 0 = same , -1 = dec

    for(int i = 0; i < 10; i++) {

        

        if(arr[i+1] == arr[i]) {

            fluct[i] = 0;

        } else if (arr[i+1] < arr[i]) {

            fluct[i] = -1 ;

        } else {

            fluct[i] = 1 ;

        }

        

    }

    

    for(int i = 0; i < 10; i++) {

        cout << fluct[i] << endl;

    }

    

    for(int i = 0; i < 10; i++) {

        

 

        if(increase and (fluct[i] == -1 or fluct[i] == 0))

        {

            both = true;

            cout << "Both" << endl;

            break;

        }

        else if(decrease and (fluct[i] == 1 or fluct[i] == 0)) {

            both = true;

            cout << "Both" << endl;

            break;

        }

        else if(nochange and (fluct[i] == 1 or fluct[i] == -1))

        {

            both = true;

            cout << "Both" << endl;



            break;

        }

        else if(fluct[i] == 1) {

            increase = true;

            cout << "Increase" << endl;

            

        }

        else if (fluct[i] == -1) {

            decrease = true;

            cout << "Decrease" << endl;

            

        }

        else if( fluct[i] == 0) {

            nochange = true;

            cout << "No change" << endl;

        }

        else

        {

            cout << "Error" << endl;

        }

        

    }

    if(both){

        cout << "Både och" << endl;

    }

    else if (increase) {

        cout << "Enbart ökande" << endl;

    } else if (decrease) {

        cout << "Enbart fallande"  << endl;

    } else if (nochange) {

        cout << "Status quo" << endl;

    }  else {

        cout << "Ingetdera" << endl;

    }

  

    return 0;



}

