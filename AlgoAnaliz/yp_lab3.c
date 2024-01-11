#include <stdio.h>

struct Urun {
    char *urunAdi;
    int urunKodu;
    float birimFiyat;
    float kiloFiyat;
};

void urunListele(struct Urun urunler[]);
float toplamHesapla(struct Urun urunler[], int kod, int alisTipi, int miktar, float toplam);
float indirimHesapla(struct Urun urunler[], float toplam);

int main() {

    int kod, alisTipi, miktar;
    float toplam = 0.0, indirimli;
    char secim;
    struct Urun urunler[6];

    struct Urun urun1 = {"domates", 1, 8.25, 23.75};
    struct Urun urun2 = {"biber", 2, 6.25, 29.50};
    struct Urun urun3 = {"sut", 3, 15.85, 27.15};
    struct Urun urun4 = {"peynir", 4, 23.00, 95.50};
    struct Urun urun5 = {"muz", 5, 13.45, 45.50};
    struct Urun urun6 = {"armut", 6, 5.50, 20.15};

    urunler[0] = urun1;
    urunler[1] = urun2;
    urunler[2] = urun3;
    urunler[3] = urun4;
    urunler[4] = urun5;
    urunler[5] = urun6;
    
    do {
        urunListele(urunler);

        do {
            printf("Urun kodu giriniz: ");
            scanf("%d", &kod);
            printf("Alis tipi (1:Birim, 2:Kilo): ");
            scanf("%d", &alisTipi);
        } while(kod >= 1 && kod <= 6 && (alisTipi == 1 || alisTipi == 2));
        
        printf("Miktar giriniz: ");
        scanf("%d", &miktar);

        while (getchar() != '\n');
 
        toplam = toplamHesapla(urunler, kod, alisTipi, miktar, toplam);

        printf("Toplam tutar: %.2f", toplam);
        printf("Devam etmek istiyor musunuz? (E/H):");
        secim = getchar();
        
    } while (secim == 'E');

    indirimli = indirimHesapla(urunler, toplam);

    printf("Toplam tutar: %.2f", toplam);
    printf("Indirimli tutar: %.2f", indirimli);

    return 0;

}

void urunListele(struct Urun urunler[]) {
    int i;
    
    printf("Kod\tUrun Adi\tBirim Fiyat\tKilo Fiyat\n");
        for (i = 0; i < 6; i++) {
            printf("%d\t%s\t\t%.2f\t\t%.2f\n", i+1, urunler[i].urunAdi, urunler[i].birimFiyat, urunler[i].kiloFiyat);
        }
} 

float toplamHesapla(struct Urun urunler[], int kod, int alisTipi, int miktar, float toplam) {

    if (alisTipi == 1) {
            toplam += (urunler[kod-1].birimFiyat * miktar);
        }
        else {
            toplam += (urunler[kod-1].kiloFiyat * miktar);
        }

        return toplam;
}

float indirimHesapla(struct Urun urunler[], float toplam) {
    
    float indirimli;

    if (toplam < 50) {
       indirimli = toplam;
       return indirimli;
    }
    else if (toplam >= 50 && toplam < 100) {
        indirimli = toplam - (toplam * 0.05);
        return indirimli;
    }
    else {
        indirimli = toplam - (toplam * 0.1);
        return indirimli;
    }
    
}