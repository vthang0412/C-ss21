#include <stdio.h>

int main() {
    FILE *fptr;
    char them[100];  
    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;  
    }
    printf("Nhap chuoi can ghi vao file:");
    fgets(them, sizeof(them), stdin); 
    fprintf(fptr, "%s", them);
    fclose(fptr);
    printf("Chuoi da duoc ghi vao file bt01.txt.\n");

    return 0;
}
