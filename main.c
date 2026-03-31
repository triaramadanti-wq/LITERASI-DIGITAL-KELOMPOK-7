#include <stdio.h>

void konversiSuhu(){
    int kon, versi;
    float suhu, hasil;

    printf("Masukan suhu =");
    scanf("%f", &suhu);

    printf("Konversi \n1. Celcius\n2. Fahreinheit\n3. Kelvin\n= ");
    scanf("%d", &kon);

    switch (kon) {
    case 1:
        printf("Menjadi \n1. Fahreinheit\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu * 9/5) + 32;
        else if (versi == 2)
            hasil = suhu + 273;
        else
            hasil = suhu;
        break;
    case 2:
        printf("Menjadi \n1. Celcius\n2. Kelvin\n= ");
        scanf("%d", &versi);
        if (versi == 1)
            hasil = (suhu - 32) * 5 / 9;
        else if (versi == 2)
            hasil = (suhu - 32) * 5 / 9 + 273;
        else
            hasil = suhu;
        break;
    case 3:
        printf("Menjadi \n1. Celcius\n2. Fahreinheit\n= ");
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
        printf("%.2f", hasil);
}

void konversiJarak(){}
void konversiBerat(){}
void konversiWaktu(){}

int main(){
    int pilihan, jalan;

    while(jalan){
        printf("\n === KALKULATOR KONVERSI SATUAN ===\n");
        printf(" 1. konversi suhu\n2. konversi jarak\n3. konversi Berat\n4. konversi waktu\n5. selesai\n");

        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                konversiSuhu();
                jalan = 0;
                break;
            case 2: 
                konversiJarak();
                jalan = 0;
                break;
            case 3:
                konversiBerat();
                jalan = 0;
                break;
            case 4:
                konversiWaktu();
                jalan = 0;
                break;
            case 5:
                printf("Terimakasih!\n");
                jalan = 0;
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    }
}