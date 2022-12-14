#include <stdio.h>

int main() {

    float C, R, F, K;
    char jawaban;

    do{ printf("========Program Konversi Suhu========\n");
        printf("\nMasukkan suhu dalam Celcius : ");
        scanf("%f", &C);
        printf("Hasil konversi %.2f Celcius ialah : \n", C);

    /*Rumus Konversi Suhu Celsius*/
        R = 0.8 * C;
        F = 1.8 * C + 32;
        K = C + 273;

        printf("\tReamur\t\t: %.2f\n", R);
        printf("\tFahrenheit\t: %.2f\n", F);
        printf("\tKelvin\t\t: %.2f\n", K);


        printf("Apakah anda ingin konversi lagi? (y/t) : ");
        scanf(" %c", &jawaban);

    }while(jawaban=='y');
    printf("\n\nPerulangan sudah berhenti. Terima Kasih");

    return 0;

}
