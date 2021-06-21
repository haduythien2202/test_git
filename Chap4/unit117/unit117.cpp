#include <stdio.h>
#include <math.h>
#include <conio.h>

int IsPrime(int a){
    for(int i = 2; i<= sqrt(a);i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

void Num(int n){
    for(int i =1; i <= n;i++){
        if(IsPrime(i)){
            printf("%d ", i);
        }
        
    }
    printf("khong con so nguyen to");
}
main(){
    int n;
    printf("\nInsert n: ");
    scanf("%d", &n);
    Num(n);
    getch();
    return 0;
}