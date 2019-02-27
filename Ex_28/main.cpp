#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	 /* Uppgift 28: Miniräknare3

    Miniräknare, not so enkel anymore…

    

    Samma som uppgift 6 fast användaren får skriva in hela beräkningen på en och samma rad, dvs alla tre inläsningar (värde, räknesätt, värde). Sedan så ska programmer själv avgöra (med hjälp av vilket tecken +,-,*,/ som användaren skrev in mellan talen) vad det ska räkna ut och skriva ut resultatet.*/

    

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

    cout << "Välj ett räknesätt" << endl;

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

            cout << "Skriv ett korrekt räknesätt";

            break;

    }



    

    cout << "Resultatet är " << result << endl;

        

        cout << "Vill du fortsätta programmer? Skriva ja/nej" << endl;

        cin >> answerString;

        

        if(answerString[0] == 'j' && answerString[1] == 'a' ) {

            answer = true;

            cout << "Calculator continous" << endl;

        } else if (answerString[0] == 'n' && answerString[1] == 'e' && answerString[2] == 'j') {

            answer = false;

            cout << "Calculator ended" << endl;

        } else {

            cout << "Du måste skriva ja/nej" << endl;

        }

    }
	return 0;
}
