#include <stdio.h>

void displayStructure(int height) {
    for (int i = 1; i <= height; i++) {
        // Print the number i, i times
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    int height = 4; // Fixed height as per the requested structure
    displayStructure(height);
    return 0;
}
