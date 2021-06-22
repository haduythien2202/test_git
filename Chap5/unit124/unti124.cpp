#include <stdio.h>
#define MAX 1000

void Insert(float a[], int &n){
    do{
        printf("\nInsert Length of array: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nInsert error");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0;i <n;i++){
        printf("\nInsert a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void PrintArr(float a[], int n){
    for(int i = 0;i < n; i++){
        printf("%8.3f ", a[i]);
    }
}

void SortArr(float a[], int n){
    for(int i = 0;i < n;i++){
        for(int j = i +1;j<n;j++){
            if(a[i] > a[j]){
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

main(){
    int n;
    float a[MAX];
    Insert(a, n);
    PrintArr(a, n);
    SortArr(a, n);
    printf("\nArray after sort");
    PrintArr(a, n);
    return 0;
}