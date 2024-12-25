#include <stdio.h>

int main() {
    FILE *fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    char kyTuDauTien;
    kyTuDauTien = fgetc(fptr);
    if (kyTuDauTien == EOF) {
        printf("File bt01.txt rong.\n");
    } else {
        printf("Ky tu dau tien trong file bt01.txt la: '%c'\n", kyTuDauTien);
    }

    fclose(fptr);
    return 0;
}

