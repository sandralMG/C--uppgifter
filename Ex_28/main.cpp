#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	 /* Uppgift 28: Minir�knare3

    Minir�knare, not so enkel anymore�

    

    Samma som uppgift 6 fast anv�ndaren f�r skriva in hela ber�kningen p� en och samma rad, dvs alla tre inl�sningar (v�rde, r�knes�tt, v�rde). Sedan s� ska programmer sj�lv avg�ra (med hj�lp av vilket tecken +,-,*,/ som anv�ndaren skrev in mellan talen) vad det ska r�kna ut och skriva ut resultatet.*/

    

    char op;

    int tal1, tal2;

    float result = 0;

    bool answer = true;

    string answerString;

    string ans1 = "ja";

    string ans2 = "nej";



    

    while(answer) {

    

    cout << "Skriv in tal 1: ";

    cin >> tal1;

    cout << "Skriv in tal 2 : ";

    cin >> tal2;

    cout << "V�lj ett r�knes�tt" << endl;

    cin >> op;

   

    switch(op) {

        case '+':

            result = tal1+tal2;

            break;

        case '-':

            result = tal1-tal2;

            break;

        case '*': result = tal1*tal2;

            break;

        case '/':

            result = tal1/tal2;

            break;

        default:

            cout << "Skriv ett korrekt r�knes�tt";

            break;

    }



    

    cout << "Resultatet �r " << result << endl;

        

        cout << "Vill du forts�tta programmer? Skriva ja/nej" << endl;

        cin >> answerString;

        

        if(answerString[0] == 'j' && answerString[1] == 'a' ) {

            answer = true;

            cout << "Calculator continous" << endl;

        } else if (answerString[0] == 'n' && answerString[1] == 'e' && answerString[2] == 'j') {

            answer = false;

            cout << "Calculator ended" << endl;

        } else {

            cout << "Du m�ste skriva ja/nej" << endl;

        }

    }
	return 0;
}
