#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char trojan[] = "horse";
    char worm[] = "ILOVEYOU.vbs";
    char rootkit[] = ".ex1";
    char malware[20];

    scanf("%s", malware);

    if(strstr(malware, trojan) != NULL){
        printf("trojan detected!");
    }else if(strncmp(malware, worm, sizeof(malware)) == 0){
        printf("worm detected!");
    }else if(strstr(malware, rootkit) != NULL){
        printf("rootkit detected!");
    }else{
        printf("this file is safe, proceed");
    }

    return 0;
}