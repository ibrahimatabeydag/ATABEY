#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL , "Turkish");
	
	
	int saniye;
	int dakika;
	int saat;
	int toplam;
	
	printf("Saat    : ");	
	scanf("%d" ,&saat);
	
	printf("Dakika : ");	
	scanf("%d" ,&dakika);
	
	printf("Saniye : " ,&saniye);	
	scanf("%d");
	

	
	toplam = saat*3600 + dakika*60 + saniye;
	
	printf("Toplam þu kadar saniye yapar : %d" ,toplam);
	
	return 0;
	
	
	
	
}
