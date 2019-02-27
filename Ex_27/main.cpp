#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string op;

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

   

        if(op.compare("addition")) {

            result = tal1+tal2;



        } else if (op.compare("subtraction")) {

            result = tal1-tal2;

        } else if (op.compare("multiplication")) {

            result = tal1*tal2;

        } else if (op.compare("division")) {

            result = tal1/tal2;



        } else {

            cout << "Skriv ett korrekt räknesätt";

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
