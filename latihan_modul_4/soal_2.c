#include <stdio.h>

void boogie_woogie(int *arr, int i, int j) 
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int k = 0; k < N; k++) 
        scanf("%d", &A[k]);

    int i, j;
    scanf("%d %d", &i, &j);

    boogie_woogie(A, i, j);

    for (int k = 0; k < N; k++) 
        printf("%d ", A[k]);

    return 0;
}