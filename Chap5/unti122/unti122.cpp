#include <stdio.h>
#include <math.h>
#define MAX 1000

void Insert(int a[], int &n){
    do{
        printf("\nInsert n: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nInsert not correct");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0;i < n; i++){
        printf("\nInsert a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int Examine(int n){
    int count = 0;
    for(int i = 2;i < (n-1) ;i++){
        if(n%i == 0){
            count = 1;
        }
    }
    return count;
}

int Check(int a[], int n){
    int count = 0;
    for(int i = 0;i < n;i++){
        int b = Examine(a[i]);
        if(b == 0){
            count ++;
        }
    }
    return count;
}

main(){
    int n;
    int a[MAX];
    Insert(a, n);
    int c = Check(a, n);
    printf("\nNumber of Prime: %d", c);
    return 0;
}