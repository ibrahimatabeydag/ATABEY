#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Turkish");
	
	
	int sayac = 0;
	int puan;
	int toplamnot = 0;


	printf("Notu giriniz, ��kmak i�in -1 yaz�n�z\n");
	scanf("%d" ,&puan);
		
	
	while(puan != -1)
	{
		toplamnot = toplamnot + puan;
		sayac = sayac + 1;
		printf("Notu giriniz, ��kmak i�in -1 yaz�n�z\n");
		scanf("%d" ,&puan);
	}
	
		float ortalama = toplamnot / sayac;
		printf("%d ki�inin ortalamas� : %f\n" ,sayac,ortalama);

		return 0;

	}

