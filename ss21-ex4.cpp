#include <stdio.h>

int main() {
    FILE *fptr;
    char dong[100];
    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;  
    }
    if (fgets(dong, sizeof(dong), fptr) != NULL) {
        printf("Dong dau tien trong file bt01.txt la: %s", dong);
    } else {
        printf("File bt01.txt rong hoac khong co noi dung.\n");
    }
    fclose(fptr);
    return 0;
}

