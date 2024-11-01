#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int kataKeN(int n){
    if(n == 1){
        return 1;
    }else{
        return kataKeN(n-1)+(n)*(n);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", kataKeN(n));
       
    return 0;
}