#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bilgilerin depolanmasý için struct yapýsý oluþturulur.
	struct ogrenci {
	char ad[10];
	char soyad[15];
	char adres[50];
	int numara;
}ogr1,ogr2,ogr3,ogr4,ogr5;


int main(int argc, char *argv[]) {
// kullanýcan öðrencilerin bilgilerini girmesi istenir.
		printf("Lutfen 1. ogrencinin bilgilerini girin:");
		printf("\n");
		printf("AD: ");
        scanf("%s", &ogr1.ad);
        printf("SOYAD: ");
        scanf("%s", &ogr1.soyad);
        printf("ADRES: ");
        scanf("%s", &ogr1.adres);
        printf("NUMARA: ");
        scanf("%d", &ogr1.numara);
        printf("\n");
        
    // kullanýcan öðrencilerin bilgilerini girmesi istenir.    
        printf("Lutfen 2. ogrencinin bilgilerini girin:");
        printf("\n");
		printf("AD: ");
        scanf("%s", &ogr2.ad);
        printf("SOYAD: ");
        scanf("%s", &ogr2.soyad);
        printf("ADRES: ");
        scanf("%s", &ogr2.adres);
        printf("NUMARA: ");
        scanf("%d", &ogr2.numara);
        printf("\n");
        
        // kullanýcan öðrencilerin bilgilerini girmesi istenir.     
        printf("Lutfen 3. ogrencinin bilgilerini girin:");
        printf("\n");
		printf("AD: ");
        scanf("%s", &ogr3.ad);
        printf("SOYAD: ");
        scanf("%s", &ogr3.soyad);
        printf("ADRES: ");
        scanf("%s", &ogr3.adres);
        printf("NUMARA: ");
        scanf("%d", &ogr3.numara);
        printf("\n");
        
        // kullanýcan öðrencilerin bilgilerini girmesi istenir.
        printf("Lutfen 4. ogrencinin bilgilerini girin:");
        printf("\n");
		printf("AD: ");
        scanf("%s", &ogr4.ad);
        printf("SOYAD: ");
        scanf("%s", &ogr4.soyad);
        printf("ADRES: ");
        scanf("%s", &ogr4.adres);
        printf("NUMARA: ");
        scanf("%d", &ogr4.numara);
        printf("\n");
        
        // kullanýcan öðrencilerin bilgilerini girmesi istenir.
        printf("Lutfen 5. ogrencinin bilgilerini girin:");
        printf("\n");
		printf("AD: ");
        scanf("%s", &ogr5.ad);
        printf("SOYAD: ");
        scanf("%s", &ogr5.soyad);
        printf("ADRES: ");
        scanf("%s", &ogr5.adres);
        printf("NUMARA: ");
        scanf("%d", &ogr5.numara);
        printf("\n");
        
        //öðrenci bilgileri ekrana yazdýrýlýr.
        printf("1. ogrencinin bilgileri:");
        printf("\n");
		printf("AD: %s", ogr1.ad);
		printf("\n");
		printf("SOYAD: %s",ogr1.soyad);
		printf("\n");
        printf("ADRES: %s",ogr1.adres);
        printf("\n");
        printf("NUMARA: %d", ogr1.numara);
        printf("\n\n");
        
        printf("2. ogrencinin bilgileri:");
        printf("\n");
		printf("AD: %s", ogr2.ad);
		printf("\n");
		printf("SOYAD: %s",ogr2.soyad);
		printf("\n");
        printf("ADRES: %s",ogr2.adres);
        printf("\n");
        printf("NUMARA: %d", ogr2.numara);
        printf("\n\n");
        
        printf("3. ogrencinin bilgileri:");
        printf("\n");
		printf("AD: %s", ogr3.ad);
		printf("\n");
		printf("SOYAD: %s",ogr3.soyad);
		printf("\n");
        printf("ADRES: %s",ogr3.adres);
        printf("\n");
        printf("NUMARA: %d", ogr3.numara);
        printf("\n\n");
        
        printf("4. ogrencinin bilgileri:");
        printf("\n");
		printf("AD: %s", ogr4.ad);
		printf("\n");
		printf("SOYAD: %s",ogr4.soyad);
		printf("\n");
        printf("ADRES: %s",ogr4.adres);
        printf("\n");
        printf("NUMARA: %d", ogr4.numara);
        printf("\n\n");
        
         printf("5. ogrencinin bilgileri:");
        printf("\n");
		printf("AD: %s", ogr5.ad);
		printf("\n");
		printf("SOYAD: %s",ogr5.soyad);
		printf("\n");
        printf("ADRES: %s",ogr5.adres);
        printf("\n");
        printf("NUMARA: %d", ogr5.numara);
        
        	
	printf("\n\n\n");
	
	printf("ISIM: TAHA YASIN\n");
	printf("SOYISIM: CICEK\n");
	printf("OGRENCI NO: 1220505012\n");
    printf("PROGRAMIN YAPTIGI ISLEM: Struct ile 5 adet ogrencinin kisisel bilgilerini depolamak ve bunlari ekrana yazdirmak.");	
		
        
	return 0;
}
