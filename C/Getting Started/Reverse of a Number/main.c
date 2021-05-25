// If a five-digit number is input through the keyboard, write a
// program to reverse the number.

#include <stdio.h>

int reverseOfNumber(int aNum);

int main(){
    int num;
    printf(">>> ");
    scanf("%i", &num);
    reverseOfNumber(num);
    return 0;
}

int reverseOfNumber(int aNum){
    int reversedNumber, number, remainder;
    reversedNumber = 0;
    number = aNum;
    while (number != 0){
        remainder = number % 10;
        reversedNumber = (reversedNumber * 10) + remainder;
        number = (int) number / 10;
    }
    printf("%i", reversedNumber);
    return reversedNumber;
}