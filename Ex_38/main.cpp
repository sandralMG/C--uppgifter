#include <iostream>

using namespace std;

int temp() {

    int t;

    cout << "Skriv in en temperatur" << endl;

    cin >> t;

    return t;

    

}



float calculator(float celcius) {

    float fahrenheit;

    

    fahrenheit = celcius * 1.8 + 32;

    

    return fahrenheit;

}



int main() {

    

   //Uppgift 38



    int t_c = temp();

    

    int t_f = calculator(t_c);

    

    cout << "Temperaturen " << t_c << "Celcius motsvarar " << t_f << "Fahrenheit" << endl;

    

    return 0;

}
