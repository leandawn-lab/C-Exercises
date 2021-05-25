/*
Exercise 6:
Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.

GOAL: Create a function to interchange the contents.

*/

#include <stdio.h>

int interchange(int first, int second);

int main(){
    int locC, locD;
    printf("What is the location of C? \n >>>");
    scanf("%i", &locC);
    printf("What is the location of D? \n >>>");
    scanf("%i", &locD);
    interchange(locC, locD);
    return 0;
}

int interchange(int first, int second){
    int resultFirst, resultSecond;
    resultFirst = second;
    resultSecond = first;
    printf("Contents of First: %i, Contents of Second: %i\n", resultFirst, resultSecond);
    return resultFirst, resultSecond;
}