#include <stdio.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"Turkish");
	
	
char isim;
	
	
	
	printf("�sminizi girin : \a ");
	scanf("%c" ,&isim);
	
	
	printf("�sminizin ba� harfi : %c" ,isim);
	
	
	
	return 0;

}
