#include <stdio.h>

int main(){
    int a;
    int i;

    scanf("%d", &a);
    for (i = 1; i <= a; i++){
        if (i % 2 == 1){
            printf("%d ", i);
        }
    }printf("\n");
    for (i = a; i > 0; i--){
        if (i % 2 == 0){
            printf("%d ", i);
        }
    }
}