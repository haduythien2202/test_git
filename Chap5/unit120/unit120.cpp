#include <stdio.h>
#define MAX 100

void Nhap(float a[],int &n){
    do{
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <=0 || n > MAX){
            printf("\nSo phan tu khong hop le");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n;i++){
        printf("\nNhap a[%d]", i);
        scanf("%f", &a[i]);
    }
}

int FindIndex(float a[], int n){
    int count = 0;
    for(int i = 0;i < n;i++){
        if(a[i] < a[count]){
            count = i;
        }
    }
    return count;
}

main(){
    int n;
    float a[MAX];
    Nhap(a, n);
    int num = FindIndex(a, n);
    printf("%d", num);
    return 0;
}