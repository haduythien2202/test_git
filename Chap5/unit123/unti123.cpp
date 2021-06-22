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

float Sum(float a[], int n){
    float sum = 0;
    for(int i = 0;i < n;i++){
        if(a[i] < 0){
            sum += a[i];
        }
    }
    return sum;
}

main(){
    int n;
    float a[MAX];
    Insert(a, n);
    float sum = Sum(a ,n);
    printf("\nSum of negative num in array: %f", sum);
    return 0;
}