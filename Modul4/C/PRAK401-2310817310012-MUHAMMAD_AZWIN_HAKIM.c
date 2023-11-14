#include <stdio.h>

int main(){
    int a;
    int i;
    char b;

    scanf("%d %c", &a, &b);
    for (i = 1; i <= 50; i++){
        if (i % a == 0){
            printf("%c ", b); 
        }else{
            printf("%d ", i);
        }
                  
    }
}