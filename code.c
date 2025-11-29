#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int year = 2025;
    int month = 11;
    int days = 30; // November has 30 days

    srand(time(NULL));  // Seed the random number generator

    printf("Random Git contributions for November %d:\n\n", year);

    for (int day = 1; day <= days; day++) {
        int contributions = (rand() % 2) + 1;   // random 1 or 2
        printf("%d-%02d-%02d : %d contributions\n", year, month, day, contributions);
    }

    return 0;
}