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
        printf("%d ", a[i]);
    }
}

void Examine(int a[], int n){
    int count = 0;
    for(int i = 0;i < n;i++){
        if(a[i]%2==0){
            printf("\nIndex of first even number is %d", i);
            count = 1;
            break;
        }
    }
    if(count == 0){
        printf("\n -1");
    }
}

main(){
    int n;
    int a[MAX];
    Insert(a, n);
    PrintArr(a, n);
    Examine(a, n);
    return 0;
}