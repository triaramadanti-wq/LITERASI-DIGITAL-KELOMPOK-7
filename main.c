#include <stdio.h>

void konversiSuhu(){
    int kon, versi;
    float suhu, hasil;

    printf("===============\nMasukan suhu = ");
    scanf("%f", &suhu);

    printf("---------------\nKonversi \n1. Celcius\n2. Fahreinheit\n3. Kelvin\n= ");
    scanf("%d", &kon);

    switch (kon) {
    case 1:
        printf("---------------\nMenjadi \n1. Fahreinheit\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu * 9/5) + 32;
        else if (versi == 2)
            hasil = suhu + 273;
        else
            hasil = suhu;
        break;
    case 2:
        printf("---------------\nMenjadi \n1. Celcius\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu - 32) * 5 / 9;
        else if (versi == 2)
            hasil = (suhu - 32) * 5 / 9 + 273;
        else
            hasil = suhu;
        break;
    case 3:
        printf("---------------\nMenjadi \n1. Celcius\n2. Fahreinheit\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = suhu - 273;
        else if (versi == 2)
            hasil = (suhu - 273) * 9 / 5 + 32;
        else
            hasil = suhu;
        break;
    default:
        break;
    }

    if (hasil == suhu)
        printf("Tolong input ulang");
    else
        printf("---------------\n%.2f\n", hasil);
}

void konversiJarak(){}
void konversiBerat(){}
void konversiWaktu(){}

int main(){
    int pilihan, jalan;

    while(jalan){
        printf("==================================");
        printf("\n=== KALKULATOR KONVERSI SATUAN ===\n");
        printf("==================================\n");
            printf("1. Konversi Suhu\n2. Konversi Jarak\n3. Konversi Berat\n4. Konversi Waktu\n5. Selesai\n= ");

        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                konversiSuhu();
                jalan = 1;
                break;
            case 2: 
                konversiJarak();
                jalan = 1;
                break;
            case 3:
                konversiBerat();
                jalan = 1;
                break;
            case 4:
                konversiWaktu();
                jalan = 1;
                break;
            case 5:
                printf("\nTerimakasih!\n");
                jalan = 0;
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
        if (jalan == 1){
            printf ("\nTekan ENTER untuk melanjutkan...");
            getchar();
            getchar();
        }
    }
}