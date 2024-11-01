#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int menghitungVowel(char kalimat[], int index){
    char vowels[10] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
    
    if(kalimat[index] == '\0') {
        return 0;
    }

    int count_vowel = 0;

    for(int i = 0; i < 10; i++){
        if(kalimat[index] == vowels[i]){
            count_vowel = 1;
            break;
        }
    }

    return count_vowel + menghitungVowel(kalimat, index + 1);

}

int main() {
    char kalimat[1000];
    
    scanf("%[^\n]", kalimat);

    printf("%d", menghitungVowel(kalimat, 0));

    return 0;
}
