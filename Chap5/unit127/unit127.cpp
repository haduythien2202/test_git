#include <stdio.h>
#define MAX 1000

void Insert(int a[], int &n){
    do{
        printf("\nInsert length of array: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nInserrt error, please insert again. ");
        }       
    }while(n <= 0 || n > MAX);
    for(int i = 0;i < n;i++){
            printf("\nInsert a[%d]: ", i);
            scanf("%d", &a[i]);
        }
}

void PrintArr(int a[], int n){
    for(int i = 0;i < n;i++){
        if(a[i]%2 == 0){
            printf("%d ", a[i]);
        }
    }
}

main(){
    int n;
    int a[MAX];
    Insert(a, n);
    PrintArr(a, n);
    return 0;
}