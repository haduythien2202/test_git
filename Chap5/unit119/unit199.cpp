#include<stdio.h>
#include<conio.h>
#define MAX 100

void nhap (float a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

float lonnhat(float a[], int n)
{
    float ln = a[0];
    for(int i = 0; i < n; i++)
    {
        if(ln < a[i])
        {
            ln = a[i];
        }
    }
    return ln;
}


int main()
{
    int n;
    float a[100];
    nhap(a, n);

    float ln = lonnhat(a, n);

    printf("\nPhan tu lon nhat trong mang la %.3f", ln);

    getch();
    return 0;
}