#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // November 2025 details
    int days_in_month = 30;
    int start_day = 6;   // Saturday (0=Sun,1=Mon,...6=Sat)

    // Colors
    char *GREEN = "\033[42m  \033[0m";
    char *GREY  = "\033[100m  \033[0m";

    int day = 1;

    printf("Heatmap for November 2025:\n\n");

    // Print rows Sun→Sat (GitHub style)
    for (int row = 0; row < 7; row++) {   // 7 rows for days of week
        for (int col = 0; col < 6; col++) { // 6 columns (weeks)
            
            int box_day = col * 7 + row + 1 - start_day;

            if (box_day < 1 || box_day > days_in_month) {
                printf("   ");   // empty cell
            } else {
                int r = rand() % 2;
                if (r == 0)
                    printf("%s", GREY);
                else
                    printf("%s", GREEN);
            }
        }
        printf("\n");
    }

    return 0;
}