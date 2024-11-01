#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int totalGenap(int numbers[], int n, int index){
    if(index == n) return 0;
    
    if(numbers[index] % 2 == 0){
        return numbers[index] + totalGenap(numbers, n, index+1);
    }else{
        return totalGenap(numbers, n, index+1);
    }
}

int totalGanjil(int numbers[], int n, int index){
    if(index == n) return 0;
    
    if(numbers[index] % 2 != 0){
        return numbers[index] + totalGanjil(numbers, n, index+1);
    }else{
        return totalGanjil(numbers, n, index+1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }
    
    
    printf("Ganjil : %d\n", totalGanjil(numbers, n, 0));
    printf("Genap : %d", totalGenap(numbers, n, 0));

    return 0;
}