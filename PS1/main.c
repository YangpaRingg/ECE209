/* Program Header:
 This program will break down a budget from a user inputted hourly wage.
 Dongin Kim 9/15/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaring variables
    const double TAX = 0.14;
    const double CLOTHES_AND_ACC = 0.10;
    const double SCHOOL_SUPPLIES = 0.01;
    const double SAVINGS_BONDS = 0.25;
    const double PARENTS_BONDS = 0.50;

    double payRate;
    double hoursWorkedWeek1, hoursWorkedWeek2, hoursWorkedWeek3, hoursWorkedWeek4, hoursWorkedWeek5;
    double totalHoursWorked;
    double totalIncome;
    double netIncome;
    double costOfClothesAndAcc;
    double costOfSchoolSupplies;
    double costOfSavingsBonds;
    double savingsBondsFromParents;

    // Ask user for input
    printf("Hourly wage:");
    scanf("%lf", &payRate);

    printf("Hours worked for week 1:");
    scanf("%lf", &hoursWorkedWeek1);

    printf("Hours worked for week 2:");
    scanf("%lf", &hoursWorkedWeek2);

    printf("Hours worked for week 3:");
    scanf("%lf", &hoursWorkedWeek3);

    printf("Hours worked for week 4:");
    scanf("%lf", &hoursWorkedWeek4);

    printf("Hours worked for week 5:");
    scanf("%lf", &hoursWorkedWeek5);

    // Arithmetic
    totalHoursWorked = hoursWorkedWeek1 + hoursWorkedWeek2 + hoursWorkedWeek3 + hoursWorkedWeek4 + hoursWorkedWeek5;
    totalIncome = payRate * totalHoursWorked;
    netIncome = totalIncome - (TAX * totalIncome);
    costOfClothesAndAcc = CLOTHES_AND_ACC * netIncome;
    costOfSchoolSupplies = SCHOOL_SUPPLIES * netIncome;
    costOfSavingsBonds = SAVINGS_BONDS * (netIncome - costOfClothesAndAcc - costOfSchoolSupplies);
    savingsBondsFromParents = PARENTS_BONDS * costOfSavingsBonds;

    // Print results
    printf("\nTotal Income before tax: $ %.2lf.\n", totalIncome);
    printf("Net Income: $ %lf\n", netIncome);
    printf("Money spent on clothes and other accessories: $ %.2lf\n", costOfClothesAndAcc);
    printf("Money spent on school supplies: $ %.2lf\n", costOfSchoolSupplies);
    printf("Money spent to buy savings bonds: $ %.2lf\n", costOfSavingsBonds);
    printf("Money spent by parents to buy additional savings bonds: $ %.2lf\n", savingsBondsFromParents);

    return EXIT_SUCCESS;
}