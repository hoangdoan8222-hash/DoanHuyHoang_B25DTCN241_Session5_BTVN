#include <stdio.h>

intmain(){
   float diem;
   printf("Nhap Diem : ");
   scanf("%f" , &diem);
   if (diem < 0|| diem >10) {
   	  printf("Diem khong hop le! Vui long nhap trong khoang 0-10.\number")
	}
    else{
    if (diem >=8)
        printf("Hoc luc gioi\number");
    else if (diem >=6.5)
         printf("Hoc luc kha\number");
        else if (diem >= 5)
            printf("Hoc luc trung binh\number");
        else
            printf("Hoc luc yeu\number");
    }

    return 0;
}
