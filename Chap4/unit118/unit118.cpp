#include <stdio.h>
#include <math.h>

int IsPerfectSquare(int a){
    int count = 0;
    for(int i = 1; i <= (a/2);i++){
        if( a%i == 0 && a/i == i){
            count++;
        }
    }
    if(count > 0){
        return true;
    }
    return false;
}

void List(int n){
    printf("1 ");
    for(int i =1; i<=n;i++){
        if(IsPerfectSquare(i)){
            printf("%d ", i);
        }
    }
    printf("don't have any perfect square num left");
}

main(){
    int n;
    printf("\nInsert n: ");
    scanf("%d", &n);
    List(n);
    return 0;
}