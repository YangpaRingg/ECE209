#include <stdio.h>
#include <string.h>

void serviceCompare(char word1[50], char word2[50]);

int i = 1;
int serviceCost;

int main() {
    char serviceWord1[50];
    char serviceWord2[50];
    char serviceWord3[50];
    char serviceWord4[50];

    serviceCost = 0;

    // Output automotive service menu
    printf("Davy's auto shop services\n");
    printf("Oil change -- $35\n");
    printf("Tire rotation -- $19\n");
    printf("Car wash -- $7\n");
    printf("Car wax -- $12\n");
    printf("\n");

    // Prompt user for first auto service
    printf("Select first service:\n");
    scanf("%s", serviceWord1);
    if (strcmp(serviceWord1, "-") == 0) {
        printf("Select second service:\n");
        scanf("%s", serviceWord3);
        scanf("%s", serviceWord4);
    }
    else {
        scanf("%s", serviceWord2);
        printf("Select second service:\n");
        scanf("%s", serviceWord3);
        scanf("%s", serviceWord4);

    }

    // Print Invoice
    printf("Davy's auto shop invoice\n");
    printf("\n");
    serviceCompare(serviceWord1, serviceWord2);
    i = i + 1;
    if (strcmp(serviceWord1, "-") == 0 && strcmp(serviceWord4, "") == 0) {
        serviceCompare(serviceWord2, serviceWord3);
    }
    else {
        serviceCompare(serviceWord3, serviceWord4);
    }

    // Print invoice total
    printf("\n");
    printf("Total: $%d\n", serviceCost);

    return 0;
}

void serviceCompare(char word1[50], char word2[50]) {
    if (strcmp(word1, "Oil") == 0 && strcmp(word2, "change") == 0) {
        printf("Service %d: Oil change, $35\n", i);
        serviceCost = serviceCost + 35;
    }
    if (strcmp(word1, "Tire") == 0 && strcmp(word2, "rotation") == 0) {
        printf("Service %d: Tire rotation, $19\n", i);
        serviceCost = serviceCost + 19;
    }
    if (strcmp(word1, "Car") == 0 && strcmp(word2, "wash") == 0) {
        printf("Service %d: Car wash, $7\n", i);
        serviceCost = serviceCost + 7;
    }
    if (strcmp(word1, "Car") == 0 && strcmp(word2, "wax") == 0) {
        printf("Service %d: Car wax, $12\n", i);
        serviceCost = serviceCost + 12;
    }
    if (strcmp(word1, "-") == 0){
        printf("Service %d: No Service\n", i);
    }
}