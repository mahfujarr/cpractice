#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print spaces before stars (except for the first and last row)
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print stars (always 5 in this case)
        for (int j = 0; j < 5; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
