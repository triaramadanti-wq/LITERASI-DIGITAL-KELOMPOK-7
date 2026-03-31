#include stdio.h

void konversiSuhu();
void konversiJarak();
void konversiBerat();
void konversiWaktu();

int main(){
    int pilihan;

    while(){
        Printf("\n === KALKULATOR KONVERSI SATUAN ===");
        Printf(" 1. konversi suhu\n");
        Printf(" 2. konversi jarak\n");
        Printf(" 3. konversi Berat\n");
        Printf(" 4. konversi waktu\n");

        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                konversiSuhu();
                break;
            case 2: 
                konversijarak();
                break;
            case 3:
                konversiBerat();
                break;
            case 4:
                konversiWaktu();
                break;
            case 5:
                printf("Terimakasih!\n");
                exit(0);
            default:
                printf("Pilihan tidak valid!\n")
        }
    }
    return 0;
}