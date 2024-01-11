// CAFER BERK ÇERKEZLER 
// 17011050

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Resim bilgilerini tutmak icin structure.
typedef struct PGMImage
{
    char pgmType[3];
    unsigned char** image;
    unsigned int width;
    unsigned int height;
    unsigned int maxValue;
} PGMImage;

// PGM dosyasini acmak icin gerekli fonksiyon.
bool OpenPGM(PGMImage* pgm, const char* filename)
{
    // Dosya "read binary+" modunda aciliyor.
    FILE* pgmfile = fopen(filename,"rb+");
    
    // Eger dosya yoksa uyari verip doner.
    if (pgmfile == NULL)
    {
        printf("Dosya acilamiyor!\n");
        return false;
    }
    
    // Resmin dosya tipi, boyutlari ve max. greyscale
    // degerini okur. 
    fscanf(pgmfile,"%s",pgm->pgmType);

    if (strcmp(pgm->pgmType,"P5")) 
    {
        printf("Lutfen binary PGM giriniz!\n");
        exit(EXIT_FAILURE);
    }

    fscanf(pgmfile,"%d %d"
           ,&(pgm->width),&(pgm->height));

    fscanf(pgmfile,"%d",&(pgm->maxValue));
    
    // Resim bilgisini tutmak icin dinamik olarak yer aciliyor.
    pgm->image = (unsigned char**) malloc(pgm->height 
                 * sizeof(unsigned char*));  
    fgetc(pgmfile);
    for (int i = 0; i < pgm->height; i++) 
    {
        pgm->image[i] = (unsigned char*) malloc(pgm->width 
                        * sizeof(unsigned char));
  
        // Eğer bellek atanmasinda
        // hata olursa.
        if (pgm->image[i] == NULL) 
        {
            printf("Hatali bellek atanmasi!\n");
            exit(1);
        }
  
        // Gri degerlerini okur ve
        // atanan bellege yazar.
        fread(pgm->image[i],sizeof(unsigned char)
             ,pgm->width,pgmfile);
        }
  
    // Dosyayi kapatir.
    fclose(pgmfile);
  
    return true;       
}

char* RunLengthEncoder(char** image, int height, int width)
{
    int rLen, i, j, k = 0;
    int size = height * width;
    char* encImage = (char*) malloc(sizeof(char) * (size * 2 + 1));
    char* image1D = (char*) malloc(sizeof(char) * size);
    
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            image1D[k] = image[i][j];
            k++;
        }
    }
    
    k = 0;
    for (i = 0; i < size; i++)
    {
        rLen = 1;
        while (i+1 < size && image1D[i] == image1D[i+1])
        {
            rLen++;
            i++;
        }
        encImage[k++] = rLen;
        encImage[k++] = image1D[i];
    }
}
