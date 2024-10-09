#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[20000], b[20000];
    scanf("%s %s", s, b);

    int i = 0;

    for (int j = 0; j < strlen(b); j++){
        if (s[i] == b[j]) {
            printf("%d ", j+1);
            i++;
            if (i == strlen(s)) break;
        }
    }

    return 0;
}