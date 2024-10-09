#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int x_a, y_a, x_b, y_b, x_c, y_c;
    double d1, d2, d3;
    bool siku1, siku2, siku3;
    
    scanf("%d %d %d %d %d %d", &x_a, &y_a, &x_b, &y_b, &x_c, &y_c);
    
    d1 = sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));
    d2 = sqrt(pow(x_b - x_c, 2) + pow(y_b - y_c, 2));
    d3 = sqrt(pow(x_c - x_a, 2) + pow(y_c - y_a, 2));

    siku1 = fabs(pow(d1, 2) - (pow(d2, 2) + pow(d3, 2))) < 1e-6;
    siku2 = fabs(pow(d2, 2) - (pow(d1, 2) + pow(d3, 2))) < 1e-6;
    siku3 = fabs(pow(d3, 2) - (pow(d1, 2) + pow(d2, 2))) < 1e-6; 

    if (d1 == d2 && d2 == d3) {
        printf("segitiga sama sisi\n");
    } 
    else if (d1 == d2 || d2 == d3 || d1 == d3) {
        if (siku1 || siku2 || siku3) {
            printf("segitiga siku siku sama kaki\n");
        } else {
            printf("segitiga sama kaki\n");
        }
    } 
    else {
        if (siku1 || siku2 || siku3) {
            printf("segitiga siku siku sembarang\n");
        } else {
            printf("segitiga sembarang\n");
        }
    }

    return 0;
}