#include <stdio.h>
#include <math.h>

int n,x;
void Nhap(){
    printf("\nInsert n: ");
    scanf("%d", &n);

    printf("\nInsert x: ");
    scanf("%d", &x);
}

long Sum(int a){
    return pow(x, a);
}

main(){
    Nhap();
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum += Sum(i);
    }
    printf("%ld", sum);
    return 0;
}