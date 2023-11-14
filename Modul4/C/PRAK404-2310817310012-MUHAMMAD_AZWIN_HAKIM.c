#include <stdio.h>

int main() {
        int i;
        int a;
        int b;
        int op;
        double hasil;
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan: ");
        scanf("%d", &i);

        if (i == 5) {
            printf("Terimakasih, telah menggunakan kalkulator MUHAMMADAZWINHAKIM\n"); printf("\n");
            break;
        }else if (i >= 1 && i <= 4){
            double a, b;
            printf("Masukkan nilai pertama: ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%lf", &b);

            double hasil;
            char* op;

            switch (i) {
                case 1:
                    hasil = a + b;
                    op = "Penjumlahan";
                    break;
                case 2:
                    hasil = a - b;
                    op = "Pengurangan";
                    break;
                case 3:
                    hasil = a * b;
                    op = "Perkalian";
                    break;
                case 4:    
                    hasil = a / b;
                    op = "Pembagian";
                    break;
            }

            printf("Hasil %s antara %.2lf dengan %.2lf adalah %.2lf\n", op, a, b, hasil); printf("\n");
        }else{
            printf("Input anda salah, silahkan coba lagi\n"); printf("\n");
        }

    }

    return 0;
}
