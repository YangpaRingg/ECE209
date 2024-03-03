// Dongin Kim
// This program will output a billing statement based on income and amount of time spent during the consulting session.

#include <stdio.h>
#include <stdbool.h>
double billingAmount(double hRate, double consTime, bool lowInc);
int main()
{
    double hourlyRate;
    double consultingTime;
    bool lowIncome;
    double yearlyIncome;
    double BillingAmountDue;

    // Ask for income, hourly rate, and consulting time
    printf("Enter yearly income :");
    scanf("%lf", &yearlyIncome);
    if (yearlyIncome <= 25000) {    // Check if income amount is considered low income or not
        lowIncome = 1;
        printf("This is Low Yearly Income:\n");
    }
    else {
        lowIncome = 0;
        printf("This is not Low Yearly Income\n");
    }
    printf("Enter the hourly rate :");
    scanf("%lf", &hourlyRate);
    printf("Enter consulting time in minutes :");
    scanf("%lf", &consultingTime);

    // Output billing amount
    BillingAmountDue = billingAmount(hourlyRate, consultingTime, lowIncome);
    printf("The Billing Amount = %.2lf in dollars\n", BillingAmountDue);

    return 0;
}
double billingAmount(double hRate, double consTime, bool lowInc)
{
    double amountDue;

    if (lowInc == 1) {
        if (consTime <= 30) {
            amountDue = 0;
        }
        if (consTime > 30) {
            consTime = consTime - 30;
            consTime = consTime / 60;
            amountDue = .4 * hRate * consTime;
        }
    }
    else if (lowInc == 0) {
        if (consTime <= 20) {
            amountDue = 0;
        }
        if (consTime > 20) {
            consTime = consTime - 20;
            consTime = consTime / 60;
            amountDue = .7 * hRate * consTime;
        }
    }

    return amountDue;
}