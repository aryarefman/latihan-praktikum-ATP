#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

long long selisihMinimal(long long numbers[], int n, long long sum1, long long sum2, int index) {
    if (index == n) {
        return llabs(sum1 - sum2);
    }
    
    long long selisih1 = selisihMinimal(numbers, n, sum1 + numbers[index], sum2, index + 1);
    long long selisih2 = selisihMinimal(numbers, n, sum1, sum2 + numbers[index], index + 1);
    
    return (selisih1 < selisih2) ? selisih1 : selisih2;
}

int main() {
    int n;
    scanf("%d", &n);

    long long numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &numbers[i]);
    }

    long long result = selisihMinimal(numbers, n, 0, 0, 0);
    printf("%lld\n", result);

    return 0;
}

