#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Pohon {
    char kode_rahasia[5];
    char jenis_buah_dibalik[21];
    int jumlah_buah;
};

void balik_string(char* str, char* hasil) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        hasil[i] = str[len - i - 1];
    }
    hasil[len] = '\0';
}

void buat_kode_rahasia(char* nama_pohon, char* kode_rahasia) {
    int len = strlen(nama_pohon);
    kode_rahasia[0] = nama_pohon[0];
    kode_rahasia[1] = 'X';
    kode_rahasia[2] = 'X';
    kode_rahasia[3] = nama_pohon[len - 1];
    kode_rahasia[4] = '\0';
}

int main() {
    struct Pohon pohon[3];
    char nama_pohon[21], jenis_buah[21];
    int total_buah = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s %s %d", nama_pohon, jenis_buah, &pohon[i].jumlah_buah);
        total_buah += pohon[i].jumlah_buah;
        buat_kode_rahasia(nama_pohon, pohon[i].kode_rahasia);
        balik_string(jenis_buah, pohon[i].jenis_buah_dibalik);
    }

    printf("%d\n", total_buah);

    for (int i = 0; i < 3; i++) {
        printf("%s %s %d\n", pohon[i].kode_rahasia, pohon[i].jenis_buah_dibalik, pohon[i].jumlah_buah);
    }

    return 0;
}