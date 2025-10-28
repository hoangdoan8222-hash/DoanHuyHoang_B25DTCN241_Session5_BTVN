#include <stdio.h>

int main() {
    float soKWh, tienBacThang = 0, phuPhi = 0, tongTien = 0;
    int loaiHo;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &soKWh);

    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiHo);

    if (soKWh < 0) {
        printf("Loi: So dien khong hop le!\n");
        return 0;
    }

    if (loaiHo < 1 || loaiHo > 3) {
        printf("Loi: Loai ho khong hop le!\n");
        return 0;
    }

    if (soKWh <= 50) {
        tienBacThang = soKWh * 1500;
    } 
    else if (soKWh <= 100) {
        tienBacThang = 50 * 1500 + (soKWh - 50) * 2000;
    } 
    else if (soKWh <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (soKWh - 100) * 2500;
    } 
    else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soKWh - 200) * 3000;
    }

    switch (loaiHo) {
        case 1: // H? gia dình
            phuPhi = tienBacThang * 0.05;
            break;
        case 2: 
            phuPhi = tienBacThang * 0.10;
            break;
        case 3: 
            phuPhi = tienBacThang * 0.08;
            break;
    }

    tongTien = tienBacThang + phuPhi;

    printf("\n--- KET QUA ---\n");
    printf("So dien tieu thu: %.0f kWh\n", soKWh);

    if (loaiHo == 1)
        printf("Loai ho: Ho gia dinh\n");
    else if (loaiHo == 2)
        printf("Loai ho: Ho kinh doanh\n");
    else
        printf("Loai ho: Ho san xuat\n");

    printf("Tien bac thang: %.0f VND\n", tienBacThang);
    printf("Phu phi: %.0f VND\n", phuPhi);
    printf("Tong tien dien: %.0f VND\n", tongTien);

    return 0;
}


