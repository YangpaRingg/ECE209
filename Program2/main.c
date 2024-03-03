// Dongin Kim
// This program will find the pressure of a given amount of Carbon Dioxide at a given temperature.

#include <stdio.h>
#define LITER 0.001 // converting milliliters to liters
int main(void) {
    double moles; // amount of carbon dioxide
    double press; // pressure of carbon dioxide
    double temp; // temperature value for volume
    double first_vol; // initial volume of CO2
    double final_vol; // final volume of CO2
    double step; // increment value for volume
    double count_vol; // loop control variable
    const double a = 3.592; // constant a in Van der Waals equation
    const double b = 0.0427; // constant b in Van der Waals equation
    const double R = 0.08206; // gas constant R

    // Display user instructions
    printf("\nPlease enter at the prompts the number of moles of carbon ");
    printf("dioxide,\nthe absolute temperature, the initial volume in ");
    printf("milliliters, the\nfinal volume, and the increment volume ");
    printf("between lines of the table.");

    // Take input
    printf("\n\nAmount of Carbon Dioxide (Moles): ");
    scanf("%lf", &moles);
    printf("Temperature (Kelvins): ");
    scanf("%lf", &temp);
    printf("Initial volume (milliliters): ");
    scanf("%lf", &first_vol);
    printf("Final volume (milliliters): ");
    scanf("%lf", &final_vol);
    printf("Volume Increment (milliliters): ");
    scanf("%lf", &step);

    // Convert milliliters to liters
    first_vol = first_vol / 1000;
    final_vol = final_vol / 1000;
    step = step / 1000;

    // Calculate pressures from input values and print table
    printf("\n%.4f moles of carbon dioxide\nat an absolute temperature of %.2f degrees\n\n", moles, temp);
    printf("Volume\t\tPressure\n(milliliters)\t(atmospheres)\n");

    double iVol; // volume value used in equation for each iteration
    iVol = first_vol;
    for(count_vol = 0; iVol <= final_vol+.001; count_vol++) {
        press = ((moles * R * temp) / (iVol - (b * moles))) - ((a * (moles * moles)) / (iVol * iVol));
        printf("%.2f\t\t%.4f\n", iVol*1000, press);
        iVol = iVol + step;
    }

    return (0);
}