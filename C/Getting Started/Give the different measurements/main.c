/*
Exersice 2: 
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.

GOAL: to create a function to print all the following measurements.
*/
#include <stdio.h>

double givesAllMeasurements(double theMeasurement);

int main(){
    double measurement;
    printf("What is the kilometer you want to get to calculate? \n >>>");
    scanf("%lf", &measurement);
    givesAllMeasurements(measurement);

    return 0;
}

double givesAllMeasurements(double theMeasurement){
    const double KM_TO_M = 1000.0;
    const double KM_TO_FEET = 3280.84;
    const double KM_TO_INCH = 39370.1;
    const double KM_TO_CM = KM_TO_M * 100.0;

    double allMeasurements[4];
    // Basically this will be stored as an array of multiple measurements {meters, feet, inches, centimeters}
    allMeasurements[0] = theMeasurement * KM_TO_M;  
    allMeasurements[1] = theMeasurement * KM_TO_FEET; 
    allMeasurements[2] = theMeasurement * KM_TO_INCH;
    allMeasurements[3] = theMeasurement * KM_TO_CM;

    printf("In meters: %.2lf m\n In feet: %.2lf ft\n In inches: %.2lf inch\n In centimeters: %.2lf cm\n",  allMeasurements[0], allMeasurements[1], allMeasurements[2], allMeasurements[3]);
    return allMeasurements[4];
}