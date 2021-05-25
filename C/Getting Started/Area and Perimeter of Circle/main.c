/*
Exercise 5:
The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.

GOAL: create two functions to calculate the area and perimeter and circle.
*/

#include <stdio.h>
#include <math.h>

const double PI = 3.14159;
double areaAndPerimeterOfRectangle(double length, double width);
double areaAndCircumOfCircle(double radius);

int main(){
    double scannedLength, scannedWidth, scannedRadius;
    printf("What is the length of the rectangle? \n >>>");
    scanf("%lf", &scannedLength);
    printf("What is the width of the rectangel? \n >>>");
    scanf("%lf", &scannedWidth);
    printf("What is the radius of the circle? \n >>>");
    scanf("%lf", &scannedRadius);
    areaAndPerimeterOfRectangle(scannedLength, scannedWidth);
    areaAndCircumOfCircle(scannedRadius);
    return 0;
}

double areaAndPerimeterOfRectangle(double length, double width){
    double area, perimeter;
    area = length * width;
    perimeter = (2* length) + (2*width);
    printf("The area of the rectangle: %.2lf \n The perimeter of the rectangle: %.2lf\n", area, perimeter);
    return area, perimeter;
}

double areaAndCircumOfCircle(double radius){
    double area, circum;
    area = PI*(pow(radius, 2));
    circum = 2*PI*radius;
    printf("The area of the circle: %.2lf \n The circumference of the circle: %.2lf \n", area, circum);
    return area, circum;
}