#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Turkish");
    printf("Girdiğiniz iki sayı arasındaki tüm sayıların toplamını ekrana yazdıracak programımıza hoş geldiniz!\n");
    printf("Lütfen iki sayı giriniz:");
    int i,e,sayi1,sayi2,sonuc,iki_sayinin_arasindaki_sayilar;
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);

    for (i=0; i>=0;)
    {
        iki_sayinin_arasindaki_sayilar=sayi1-sayi2;
        if (iki_sayinin_arasindaki_sayilar>0)
        {
            sonuc=0;
            for (e=sayi2+1; e<sayi1;e++)
            {
                sonuc+=e;
            }
            printf("Girdiğiniz iki sayının arasındaki sayıların toplamı: %d",sonuc);
            break;
        }
        else
        {
            sonuc = 0;
            for (e = sayi1 + 1; e < sayi2; e++) {
                sonuc += e;
            }
            printf("Girdiğiniz iki sayının arasındaki sayıların toplamı: %d", sonuc);
            break;
        }
    }
    return 0;
}
