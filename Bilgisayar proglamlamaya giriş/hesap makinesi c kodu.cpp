#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	
int islem;
int sayi1,sayi2;


printf("1:TOPLAMA\n2:ÇIKARMA\n3:ÇARPMA\n4:BÖLME\nHANGÝ ÝÞLEMÝ YAPMAK ÝSTÝYORSUNUZ?\a\n");


scanf("%d" ,&islem);

printf("ÝÞLEM YAPILACAK TAM SAYILARI GÝRÝN\n");


scanf("%d %d" ,&sayi1,&sayi2);


switch(islem){
	
	case 1 :
		printf("TOPLAMA SONUCU %d\n" ,sayi1+sayi2);
		break;
	case 2 :
		printf("ÇIKARMA SONUCU %d\n" ,sayi1-sayi2);
		break;
	case 3 :
		printf("ÇARPMA SONUCU %d\n" ,sayi1*sayi2);
		break;
	case 4 :
		printf("BÖLME SONUCU %d\n" ,sayi1/sayi2);
		break;
	default :
		printf("LÜTFEN GEÇERLÝ ÝÞLEM YAPIN");
		break;
		
}
	
	
	
	return 0;
	
	
	
}

