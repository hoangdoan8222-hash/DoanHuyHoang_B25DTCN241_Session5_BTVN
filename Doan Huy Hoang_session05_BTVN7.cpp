#include <stdio.h>
#include <math.h>

int main() {
    char c;

    printf("Nhap vao mot ky tu: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("Ky tu hoa tuong ung: %c\n", c - 32);
    } 
    else if (c >= 'A' && c <= 'Z') {
        printf("Ky tu thuong tuong ung: %c\n", c + 32);
    } 
    else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}
