#include <iostream>

using namespace std;
float celsiusToFahrenheit(float number);
float temp();

int main(int argc, char** argv) {
	
	float number = temp();
	float f = celsiusToFahrenheit(number);
	cout << "Temperaturen i Fahrenheit är: " << f << endl;
	return 0;
}

float temp() {
	
	float degree;
	cout << "Ange en temperatur i Celsius: " << endl;
	cin >> degree;
	
	return degree;
	
}

float celsiusToFahrenheit(float celsius) {
	
	float fahrenheit;
	
	fahrenheit = 1.8*celsius + 32;
	 return fahrenheit;
	
}
