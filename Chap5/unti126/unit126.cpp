#include <stdio.h>
#define MAX 1000

void Insert(float a[], int &n){
    do{
        printf("\nInsert length of array: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nInserrt error, please insert again. ");
        }       
    }while(n <= 0 || n > MAX);
    for(int i = 0;i < n;i++){
            printf("\nInsert a[%d]: ", i);
            scanf("%f", &a[i]);
        }
}

void PrintArr(float a[], int n){
    for(int i = 0;i < n;i++){
        printf("%f ", a[i]);
    }
}

main(){
    int n;
    float a[MAX];
    Insert(a, n);
    PrintArr(a, n);
    return 0;
}