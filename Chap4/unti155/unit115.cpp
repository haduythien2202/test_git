#include <stdio.h>
#include <conio.h>



long Process(int n){
    long sum = 0;
    int i =1;
    while(i <= n){
        sum += i;
        i++;
    }
    return sum;
}

main(){
    
    int n;

    printf("\nNhap gia tri n: ");
    scanf("%d", &n);
    long kq = Process(n);
    printf("\nTong: %ld", kq);
    return 0;
}