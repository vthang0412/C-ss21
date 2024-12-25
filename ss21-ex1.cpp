#include <stdio.h>

int main() {
    char chuoi[100]={"Dangvanthang"};
//    printf("Nhap chuoi ma ban muon them vao file bt01.txt: ");
//    fgets(chuoi, sizeof(chuoi), stdin);
    
    FILE *fptr = fopen("bt01.txt", "w");
    if (fptr==NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    fprintf(fptr, "%s", chuoi);
    fclose(fptr);
    printf("Da ghi chuoi vao file bt01.txt.\n");
    return 0;
}

