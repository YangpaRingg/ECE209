// Dongin Kim
// Double Scripted Array PS4
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// function prototypes
int minimum( const int grades[][EXAMS], int pupils, int tests);
int maximum( const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main (void) {
    int student;

    // initialize student grades for three students (rows)
    const int studentGrades[STUDENTS][EXAMS] =
            {{77, 68, 86, 73},
             {96, 87, 89, 78},
             {70, 90, 86, 81}};

    // output array studentGrades
    printf("The array is:\n");
    printArray(studentGrades, STUDENTS, EXAMS);

    // determine smallest and largest grade values
    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
           minimum(studentGrades, STUDENTS, EXAMS),
           maximum(studentGrades, STUDENTS, EXAMS));

    for (student = 0; student < STUDENTS; student++) {
        printf("The average grade for student %d is %.2f\n", student, average(studentGrades[student], EXAMS));
    }

    return 0;
}

// Find the minimum grade
int minimum( const int grades[][EXAMS], int pupils, int tests) {
    int i; //student counter
    int j; //exam counter
    int lowGrade = 100; // initialize to highest possible grade

    for (i = 0; i < pupils; i++) {
        for (j = 0; j < tests; j++) {
            if (grades[i][j] < lowGrade) {
                lowGrade = grades[i][j];
            }
        }
    }

    return lowGrade;
}

// Find the maximum grade
int maximum( const int grades[][EXAMS], int pupils, int tests) {
    int i; //student counter
    int j; //exam counter
    int highGrade = 0; //initialize to lowest possible grade

    for (i = 0; i < pupils; i++) {
        for (j = 0; j < tests; j++) {
            if (grades[i][j] > highGrade) {
                highGrade = grades[i][j];
            }
        }
    }

    return highGrade;
}

double average(const int setOfGrades[], int tests) {
    int i; //exam counter
    int total = 0;
    double avg = 0.00;
    double number;

    for (i = 0; i < tests; i++) {
        total = total + setOfGrades[i];
    }

    number = i;
    avg = total / number;

    return avg;
}

void printArray(const int grades[][EXAMS], int pupils, int tests) {
    int i; //student counter
    int j; //exam counter

    // output column heads
    printf("                 [0]  [1]  [2]  [3]\n");
    for (i = 0; i < pupils; i++){
        printf("studentGrades[%d] ", i);
        for (j = 0; j < tests; j++) {
            printf("%d   ", grades[i][j]);
        }
        printf("\n");
    }
}