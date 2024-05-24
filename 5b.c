#include <stdio.h>

void displayStars(int height) {
    for (int i = 0; i < height; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < height - i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int height = 5; // Fixed height as per the requested structure
    displayStars(height);
    return 0;
}
