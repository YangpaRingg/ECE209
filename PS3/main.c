#include <stdio.h>
#include <ctype.h>

int main() {
    int plane[11] = {0}; // seats on the plane
    int i = 0; // counter
    int firstClass = 1; // first class seats start at 1
    int economy = 6; // economy seats start at 6
    int choice; // user's choice
    char response [2]; //user's response

    // loop 10 times
    while (i<10) {
        printf("\n%s\n%s\n", "Please type 1 for \"first class\"", "Please type 2 for \"economy\"");
        printf(" Make sure to input 1 or 2 choice from the keyboard not something else:\n");
        printf(" This program assumes user enter only 1 or 2 for choice :\n");
        scanf( "%d", &choice);

        // if user selects first class
        if (choice == 1) {
            plane[firstClass] = 1;
            printf("Your seat assignment is %d\n", firstClass);
            firstClass++;
        }
        else if (choice == 2) {
            plane[economy] = 1;
            printf("Your seat assignment is %d\n", economy);
            economy++;
        }
        i++;
    }

    printf("\nAll seats for this flight are sold.\n");

    return 0;
}
