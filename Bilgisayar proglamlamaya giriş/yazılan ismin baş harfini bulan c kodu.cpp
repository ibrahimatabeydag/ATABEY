#include <stdio.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"Turkish");
	
	
char isim;
	
	
	
	printf("Ýsminizi girin : \a ");
	scanf("%c" ,&isim);
	
	
	printf("Ýsminizin baþ harfi : %c" ,isim);
	
	
	
	return 0;

}
