#include <stdio.h>
#include <math.h>

int main() {
    float so_m3;
    float tien = 0;

    printf("Nhap so m3 nuoc tieu thu: ");
    scanf("%f", &so_m3);

    if (so_m3 <= 0) {
        printf("So m3 khong hop le.\n");
        return 0;
    }

    if (so_m3 <= 10) {
        tien = so_m3 * 6000;
    } 
    else if (so_m3 <= 20) {
        tien = 10 * 6000 + (so_m3 - 10) * 7000;
    } 
    else if (so_m3 <= 30) {
        tien = 10 * 6000 + 10 * 7000 + (so_m3 - 20) * 8500;
    } 
    else {
        tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (so_m3 - 30) * 10000;
    }

    printf("Tong so tien phai tra: %.0f VND\n", tien);

    return 0;
}

