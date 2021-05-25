// Exercise 7:
// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.
// (Hint: Use the modulus operator ‘%’)
// GOAL: to create a function to compute the sum of the digits

#include <stdio.h>

int sumOfTheDigits(int number);

int main(){
    int intege;
    printf(">>> ");
    scanf("%i", &intege);
    printf("%i\n", sumOfTheDigits(intege));
    return 0;
}

int sumOfTheDigits(int number){
    int remainder, sum;
    for (sum = 0; number != 0; sum += remainder){
        remainder = number % 10;
        number /= 10;
    }
    return sum;

}

