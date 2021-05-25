// EXERCISE 11:
// A cashier has currency notes of denominations 10, 50 and
// 100. If the amount to be withdrawn is input through the
// keyboard in hundreds, find the total number of currency notes
// of each denomination the cashier will have to give to the
// withdrawer.

#include <stdio.h>
#include <math.h>

double totalNotes(double money);

int main(){
    double amountOfMoney;
    printf(">>> ");
    scanf("%lf", &amountOfMoney);
    totalNotes(amountOfMoney);
    return 0;
}

double totalNotes(double money){
    double notesInHundred, notesInHundredwithDecimals, notesInFifty, notesInFiftywithDecimals, notesInTen;
    notesInHundredwithDecimals = money / 100;
    notesInHundred = trunc(notesInHundredwithDecimals);
    notesInFiftywithDecimals = (notesInHundredwithDecimals - trunc(notesInHundredwithDecimals)) * 2;
    notesInFifty = trunc(notesInFiftywithDecimals);
    notesInTen = (notesInFiftywithDecimals - trunc(notesInFiftywithDecimals)) * 5;

    printf("%.0lf 100 notes \n %.0lf 50 notes, \nand %.2lf 10 notes\n", notesInHundred, notesInFifty, notesInTen);

    return notesInHundred, notesInFifty, notesInTen;
}