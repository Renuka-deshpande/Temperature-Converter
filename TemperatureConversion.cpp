#include<bits/stdc++.h>
using namespace std;

double CelsiustoFahrenheit(double celsius){
    return (celsius*9/5)+32;
}
double CelsiustoKelvin(double celsius){
    return celsius+273.15;
}
double FahrenheittoCelsius(double fahrenheit){
    return (fahrenheit-32)*5/9;
}
double FahrenheittoKelvin(double fahrenheit){
    double val=FahrenheittoCelsius(fahrenheit);
    return CelsiustoKelvin(val);
}
double KelvintoCelsius(double kelvin){
    return kelvin-273.15; 
}
double KelvintoFahrenheit(double kelvin){
    double val=KelvintoCelsius(kelvin);
    return CelsiustoFahrenheit(val);
}

int main(){
    double temperature;
    char unit;
    cout<<"Temperature conversion tool"<<endl;
    cout<<"Enter the temperature value: "<<endl;
    cin>>temperature;
    cout<<"Enter the original unit(C for Celsius, F for Fahrenheit, K for Kelvin):"<<endl;
    cin>>unit;

    switch (unit)
    {
    case 'C':
    case 'c':
        cout<<"Original Temperature "<<temperature<<" °C"<<endl;
        cout<<"In Fahrenheit "<<CelsiustoFahrenheit(temperature)<<" °F"<<endl;
        cout<<"In Kelvin "<<CelsiustoKelvin(temperature)<<" K"<<endl;
        break;
    
    case 'F':
    case 'f':
        cout<<"Original Temperature "<<temperature<<" °F"<<endl;
        cout<<"In Celsius "<<FahrenheittoCelsius(temperature)<<" °C"<<endl;
        cout<<"In Kelvin "<<FahrenheittoKelvin(temperature)<<" K"<<endl;
        break;
    
    case 'K':
    case 'k':
        cout<<"Original Temperature "<<temperature<<" K"<<endl;
        cout<<"In Celsius "<<KelvintoCelsius(temperature)<<" °C"<<endl;
        cout<<"In Fahrenheit "<<KelvintoFahrenheit(temperature)<<" °F "<<endl;
        break;
    
    default:
        cout << "Invalid unit entered." << endl;
    }

}
