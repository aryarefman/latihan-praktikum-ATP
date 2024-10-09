#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char str[100000];
    int kondisi1, kondisi2, kondisi3, kondisi4;
    char simbol[4] = {'!', '@', '#', '$'};

    scanf("%s", str);

    kondisi1 = strlen(str) >= 8;
    kondisi2 = 0;
    kondisi3 = 0;
    kondisi4 = 0;

    for(int i = 0; i <= strlen(str); i++){
        if(isalpha(str[i])) kondisi2++;
        if(isdigit(str[i])) kondisi3++;
        for(int j = 0; j < 4; j++){
            if(str[i] == simbol[j]) kondisi4++;
        }
    }

    if(kondisi1 && (kondisi2 >= 4) && (kondisi3 >= 2) && (kondisi4 >= 2)){
        printf("Password sudah aman.");
    }else{
        printf("Password masih belum aman.");
    }

    return 0;
}