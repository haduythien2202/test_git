#include <stdio.h>
#define MAX 100

void Nhap(int a[], int &n){
    do{
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap sai so phan tu");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n;i++){
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int Examine(int a[], int n){
    int count = 0;
    for(int i =0; i< n;i++){
        if(a[i] % 2 == 0 && a[i] < 2004){
            count = 1;
        }
    }
    return count;
}

main(){
    int n;
    int a[MAX];
    Nhap(a, n);
    int flag = Examine(a, n);
    if(flag == 0){
        printf("\nKhong tim duoc");
    }
    else{
        printf("tim duoc");
    }
    return 0;
}