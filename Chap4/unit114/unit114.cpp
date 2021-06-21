#include <stdio.h>
#include <conio.h>
#include <string.h>

int diemtoan, diemvan;
float avr;
char hoten[100];

void Nhap(){
    fflush(stdin);
    printf("\nNhap hoten: ");
    gets(hoten);

    printf("\nNhap diemtoan: ");
    scanf("%d", &diemtoan);

    printf("\nNhap diemvan: ");
    scanf("%d", &diemvan);

}

void trungbinh(){
    avr = (diemtoan+diemvan)/2.0;
}

void Xuat(){
    printf("\nHoten: %s", hoten);
    printf("\ndiemtoan: %d", diemtoan);
    printf("\ndiemvan: %d", diemvan);
    printf("\ndiemtrungbinh: %f", avr);
}
main(){
    Nhap();
    trungbinh();
    Xuat();
    return 0;
}