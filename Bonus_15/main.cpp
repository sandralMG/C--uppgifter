#include <iostream>



using namespace std;





float celciusToFahrenheit(float celcius) {

    float fahrenheit;

    

    fahrenheit = celcius * 1.8 + 32;

    

    return fahrenheit;

}



float fahrenheitToCelcius(float fahrenheit) {

    float celcius;

    

    celcius = (fahrenheit - 32)/1.8;

    

    return celcius;

}



float formelVal(char t, float temp_start) {

    float temp_end = -1;

    if(t == 'C') {

        temp_end = celciusToFahrenheit(temp_start);

    } else if (t == 'F') {

        temp_end = fahrenheitToCelcius(temp_start);

    } else {

        cout << "Välj mellan C eller F" << endl;

    }

    return temp_end;

}



int main() {

    

    //BONUSUPPGIFT 15: ..iskall

    float temp_start, temp_end;

    char enhet;

    cout << "Välj C för Celcius och F för Fahrenheit" << endl;

    cin >> enhet;

    cout << "Ange temperaturen" << endl;

    cin >> temp_start;

    

    temp_end = formelVal(enhet, temp_start);

    

    if(enhet == 'C') cout << "Temperaturen " << temp_start << " i Celcius motsvarar " << temp_end << " Fahrenheit" << endl;

    

     if(enhet == 'F') cout << "Temperaturen " << temp_start << " i Fahrenhet motsvarar " << temp_end << " Fahrenheit" << endl;

    

    return 0;

}
