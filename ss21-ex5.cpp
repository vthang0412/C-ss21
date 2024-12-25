#include <stdio.h>

int main() {
    FILE *fptr;
    int soDong;
    char dong[100];  
    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &soDong);
    getchar();  
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Khong the tao hoac mo file.\n");
        return 1; 
}
    for (int i = 0; i < soDong; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(dong, sizeof(dong), stdin);  
        fprintf(fptr, "%s", dong);  
    }
    fclose(fptr);
    
    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;  
    }
    printf("\nNoi dung cua file bt05.txt la:\n");
    while (fgets(dong, sizeof(dong), fptr) != NULL) {
        printf("%s", dong); 
    }
    fclose(fptr);

    return 0;
}

