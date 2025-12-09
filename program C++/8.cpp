#include<iostream>
#include<iomanip>
using namespace std;
float FahrenheitToCelsius(float TemperatureInFahrenheit);
float CelsiusToFahrenheit(float TemperatureInCelsius);
int main()
{
    float TemperatureInFahrenheit, TemperatureInCelsius;
    cout << fixed << setprecision(2);
    cout << "Enter the value of Temperature in Fehrenheit";
    cin >> TemperatureInFahrenheit;

    TemperatureInCelsius = FahrenheitToCelsius(TemperatureInFahrenheit);
    TemperatureInFahrenheit = (TemperatureInCelsius);
    cout << "Temperature in Celsius." << TemperatureInFahrenheit << endl;
    return 0;
} 
   float FahrenheitToCelsius(float TemperatureInFahrenheit){
        float TemperatureInCelsius;
        TemperatureInCelsius = 5.0/9.0 * (TemperatureInFahrenheit - 32.0);
        return TemperatureInCelsius;
   }
  
     float CelsiusToFahrenheit(float TemperatureInCelsius){
        float TemperatureInFahrenheit;
        TemperatureInFahrenheit = (9.0 /5.0 * TemperatureInCelsius) + 32.0;
        return TemperatureInFahrenheit;
     }
   