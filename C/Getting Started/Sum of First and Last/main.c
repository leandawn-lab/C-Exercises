// Exersice 10:
// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.

#include <stdio.h>
#include <math.h>

int sumOfFirstandLast(int number);

int main(){
    int inputtedNumber;
    printf(">>> ");
    scanf("%i", &inputtedNumber);
    sumOfFirstandLast(inputtedNumber);
    return 0;
}

int sumOfFirstandLast(int number){
    int numberCounter, lastDigit, firstDigit, number1, number2;
    numberCounter = 0;
    number1 = number;
    while (number1 != 0){
        number1 /= 10;
        numberCounter++;
    }
    
    if(numberCounter > 1){
        lastDigit = number / pow(10, numberCounter-1);
    }

    firstDigit = number % 10;    
    printf("%i\n", lastDigit+firstDigit);

    return 0;
}