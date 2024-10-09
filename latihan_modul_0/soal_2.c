#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    (N >= 18) ? printf("Welcome to the cool kids club") : printf("Minors DNI!!!");
    
    return 0;
}