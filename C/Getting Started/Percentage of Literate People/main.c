// Exercise 11:
// In a town, the percentage of men is 52. The percentage of
// total literacy is 48. If total percentage of literate men is 35 of
// the total population, write a program to find the total number
// of illiterate men and women if the population of the town is
// 80,000

#include <stdio.h>

void percentageOfIlleratePeople();

int main(){
    percentageOfIlleratePeople();
    return 0;
}

void percentageOfIlleratePeople(){
    const double PERCENTAGE_OF_MEN = 0.52;
    const double PERCENTAGE_OF_WOMEN = 1 - PERCENTAGE_OF_MEN;
    const double PERCENTAGE_OF_LITERATE = 0.48;
    const double PERCENTAGE_OF_LITERATE_MEN = 0.35;
    const double PERCENTAGE_OF_LITERATE_WOMEN = PERCENTAGE_OF_LITERATE - PERCENTAGE_OF_LITERATE_MEN;
    const int TOTAL_POPULATION = 80000;
    double totalIllMen = (PERCENTAGE_OF_MEN - PERCENTAGE_OF_LITERATE_MEN)*TOTAL_POPULATION;
    double totalIllWomen = (PERCENTAGE_OF_WOMEN - PERCENTAGE_OF_LITERATE_WOMEN)*TOTAL_POPULATION;

    printf("The number of illiterate people in the town: %.0f men, and %.0f women\n", totalIllMen, totalIllWomen);
}