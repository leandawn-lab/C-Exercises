/*
Exersice 1: 
Ramesh's basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.

Since I am a amateur, my goal

GOAL: to create a function to calculate Ramesh's gross salary.
*/

#include <stdio.h>
double calculateGrossSalary(double hisSalary);

int main(){
    double basicSalary;
    printf("What is your basic salary? \n >>> ");
    scanf("%lf", &basicSalary);
    calculateGrossSalary(basicSalary);
    return 0;
}

double calculateGrossSalary(double hisSalary){
    const double DEARNESS_ALLOWANCE = 0.4;
    const double HOUSE_RENT = 0.2;
    if (hisSalary == 0.0) return -1;

    double allowance = hisSalary * DEARNESS_ALLOWANCE;
    double rent = hisSalary * HOUSE_RENT;
    double grossSalary = hisSalary - (allowance + rent);
    printf("Your Gross Salary is: %lf\n", grossSalary);
    return grossSalary;

}