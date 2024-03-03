// This program will calculate a simplified version of an Individual's federal income tax based on total income and filing status
// Dongin Kim
#include <stdio.h>

int main() {

    double totalIncome;
    double deductionAmount;
    double taxIncome;       // taxable income; will be used in conditionals
    double taxIncome1;      // Variable used when calculating tax
    double tax;
    double effTaxRate;

    const int stdSingle = 12400;
    const int stdMarried = 24800;
    int filingStatus;

    // Receive input for total income
    printf("Total income: ");
    scanf("%lf", &totalIncome);

    // Receive input for filing status
    printf("Filing status (1 = single, 2 = married): ");
    scanf("%d", &filingStatus);

    // Check if entered deduction amount is less than standard deduction depending on filing status
    printf("Deduction: ");
    scanf("%lf", &deductionAmount);

    // Single
    if (filingStatus == 1) {
        if (deductionAmount < stdSingle) {
            printf("Using standard deduction: %d\n", stdSingle);
            taxIncome = totalIncome - stdSingle;
        }
        else {
            taxIncome = totalIncome - deductionAmount;
        }
    }

    // Married
    else if (filingStatus == 2) {
        if (deductionAmount < stdMarried) {
            printf("Using standard deduction: %d", stdMarried);
            taxIncome = totalIncome - stdSingle;
        }
        else {
            taxIncome = totalIncome - deductionAmount;
        }
    }
    else {
        printf("Invalid");
    }

    // Check if taxable income is negative. If so, make taxable income 0.
    if (taxIncome < 0) {
        taxIncome = 0;
    }

    // Print taxable income
    printf("Taxable income = %.0f\n", taxIncome);

    // Make taxIncome1 equal to taxIncome for arithmetic
    taxIncome1 = taxIncome;

    // Calculate total tax based on taxable income and filings status
    if (filingStatus == 1) {
        if (taxIncome > 0 && taxIncome <= 9950) {
            tax = .10 * taxIncome1;
        }
        if (taxIncome >= 9951 && taxIncome <= 40525) {
            taxIncome1 = taxIncome1 - 9950;
            tax = (0.10 * 9950) + (.12 * taxIncome1);
        }
        if (taxIncome >= 40526 && taxIncome <= 86375) {
            taxIncome1 = taxIncome1 - 40525;
            tax = (0.10 * 9950) + (0.12 * (40525 - 9950)) + (0.22 * taxIncome1);
        }
        if (taxIncome >= 86376 && taxIncome <= 164925) {
            taxIncome1 = taxIncome1 - 86375;
            tax = (0.10 * 9950) + (0.12 * (40525 - 9950)) + (0.22 * (86375 - 9950 - 40525)) + (.24 * taxIncome1);
        }
        if (taxIncome >= 164926 && taxIncome <= 209425) {
            taxIncome1 = taxIncome1 - 164925;
            tax = (0.10 * 9950) + (0.12 * (40525 - 9950)) + (0.22 * (86375 - 9950 - 40525)) + (.24 * (164925 - 9950 - 40525 - 86375)) + (.32 * taxIncome1);
        }
        if (taxIncome >= 209426 && taxIncome <= 523600) {
            taxIncome1 = taxIncome1 - 209425;
            tax = (0.10 * 9950) + (0.12 * (40525 - 9950)) + (0.22 * (86375 - 9950 - 40525)) + (.24 * (164925 - 9950 - 40525 - 86375)) + (.32 * (209425 - 9950 - 40525 - 86375 - 164925)) + (.35 * taxIncome1);
        }
        if (taxIncome >= 523601) {
            taxIncome1 = taxIncome1 - 523600;
            tax = (0.10 * 9950) + (0.12 * (40525 - 9950)) + (0.22 * (86375 - 9950 - 40525)) + (.24 * (164925 - 9950 - 40525 - 86375)) + (.32 * (209425 - 9950 - 40525 - 86375 - 164925)) + (.35 * (523600 - 9950 - 40525 - 86375 - 164925 - 209425)) + (.37 * taxIncome1);
        }
    }

    else if (filingStatus == 2) {
        if (taxIncome > 0 && taxIncome <= 19900) {
            tax = .10 * taxIncome1;
        }
        if (taxIncome >= 19901 && taxIncome <= 81050) {
            taxIncome1 = taxIncome1 - 19900;
            tax = (.10 * 19900) + (.12 * taxIncome1);
        }
        if (taxIncome >= 81051 && taxIncome <= 172750) {
            taxIncome1 = taxIncome1 - 81050;
            tax = (.10 * 19900) + (.12 * (81050 - 19900)) + (.22 * taxIncome1);
        }
        if (taxIncome >= 172751 && taxIncome <= 329850) {
            taxIncome1 = taxIncome1 - 172751;
            tax = (.10 * 19900) + (.12 * (81050 - 19900)) + (.22 * (172750 - 19900 - 81050)) + (.24 * taxIncome1);
        }
        if (taxIncome >= 329851 && taxIncome <= 418850) {
            taxIncome1 = taxIncome1 - 329851;
            tax = (.10 * 19900) + (.12 * (81050 - 19900)) + (.22 * (172750 - 19900 - 81050)) + (.24 * (329850 - 19900 - 81050 - 172750)) + (.32 * taxIncome1);
        }
        if (taxIncome >= 418851 && taxIncome <= 628030) {
            taxIncome1 = taxIncome1 - 418851;
            tax = (.10 * 19900) + (.12 * (81050 - 19900)) + (.22 * (172750 - 19900 - 81050)) + (.24 * (329850 - 19900 - 81050 - 172750)) + (.32 * (418850 - 19900 - 81050 - 172750 - 329850)) + (.35 * taxIncome1);
        }
        if (taxIncome >= 628031) {
            taxIncome1 = taxIncome1 - 628030;
            tax = (.10 * 19900) + (.12 * (81050 - 19900)) + (.22 * (172750 - 19900 - 81050)) + (.24 * (329850 - 19900 - 81050 - 172750)) + (.32 * (418850 - 19900 - 81050 - 172750 - 329850)) + (.35 * (628030 - 19900 - 81050 - 172750 - 329850 - 418850)) + (.37 * taxIncome1);
        }
    }

    // Calculate effective tax rate
    effTaxRate = tax / totalIncome * 100;

    // Print total tax and effective tax rate
    printf("Tax = %.2f\n", tax);
    printf("Effective tax rate = %.2f%%\n", effTaxRate);


    return 0;
}
