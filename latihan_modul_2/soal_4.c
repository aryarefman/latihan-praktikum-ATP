#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int a = i; a >= 1; a--) {
            printf("*");
        }

        for(int b = 0; b < 2 * (n - i); b++) {
            printf(" ");
        }

        for(int c = i; c >= 1; c--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}