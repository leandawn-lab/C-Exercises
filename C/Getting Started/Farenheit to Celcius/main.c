/*
Exercise 4:
Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.

GOAL: create a function where you convert Farenheit to Celcius

*/
#include <stdio.h>

double farenheitToCelcius(double farenheit);

int main(){
    double tempInFlorida;
    printf("What is the temperature in Florida? \n >>> ");
    scanf("%lf", &tempInFlorida);
    farenheitToCelcius(tempInFlorida);
    return 0;
}

double farenheitToCelcius(double farenheit){
    double answerCelcius;
    answerCelcius = (farenheit - 32.0) * (5.0/9.0);
    printf("The temperature is at %.2lf Celcius\n", answerCelcius);
    return answerCelcius;

}