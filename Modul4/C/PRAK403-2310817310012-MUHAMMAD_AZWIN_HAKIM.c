#include <stdio.h>

int main(){

    int a;
    int b;
    int i;
   
    scanf("%d %d", &a, &b);

    if (a > b){
        for (i = b; i <= a; i++){
            printf("%d %d", a + b - i, i);
            if (i < a) {
                printf(" - ");
            }
        }
    }else{
        for (i = a; i <= b; i++){
            printf("%d %d", i, a + b - i);
            if (i < b) {
                printf(" - ");
            }
        }            
    }    
}