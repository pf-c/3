#include <stdio.h>

void displayStructure(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int height = 4; // Fixed height as per the requested structure
    displayStructure(height);
    return 0;
}
