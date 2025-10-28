#include <stdio.h>
#include <math.h>

int main() {
    int tuoi;
    float giaVeCoBan = 20000; 
    float soTien; 
    printf("Nhap Tuoi : ");
    scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 120) {
        printf("Tuoi khong hop le\n");
    } 
    else {
        if (tuoi < 6)
            soTien = 0;
        else if (tuoi <= 18)
            soTien = giaVeCoBan * 0.5;
        else if (tuoi <= 60)
            soTien = giaVeCoBan;
        else
            soTien = giaVeCoBan * 0.7;

        printf("So tien ve : %.0f VNÐ\n", soTien);
    }

    return 0;
}
