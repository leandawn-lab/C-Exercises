/*
Exercise 3:
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.

GOAL: Create a Function to Calculate the Marks of the given student

*/

#include <stdio.h>

const int NUMBER_OF_SUBJECTS = 5;

double computeMarks(double scores[5]);

int main(){
    double subjScores[NUMBER_OF_SUBJECTS];

    for(int i = 0; i < NUMBER_OF_SUBJECTS; i++){
        printf("Subject #%i>>> ", i+1);
        scanf("%lf", &subjScores[i]);
        if(subjScores[i] >= 100) return -1;
    }
    computeMarks(subjScores);

    return 0;
}

double computeMarks(double scores[5]){
    
    int x = 0;
    double answerScores;
    while(x < NUMBER_OF_SUBJECTS){
        answerScores += scores[x];
        x++; 
    }
    double averageScores = answerScores / (double) NUMBER_OF_SUBJECTS;

    printf("Your average grade is %.2lf\n", averageScores);

    return averageScores;

}