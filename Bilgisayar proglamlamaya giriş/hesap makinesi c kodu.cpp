#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	
int islem;
int sayi1,sayi2;


printf("1:TOPLAMA\n2:�IKARMA\n3:�ARPMA\n4:B�LME\nHANG� ��LEM� YAPMAK �ST�YORSUNUZ?\a\n");


scanf("%d" ,&islem);

printf("��LEM YAPILACAK TAM SAYILARI G�R�N\n");


scanf("%d %d" ,&sayi1,&sayi2);


switch(islem){
	
	case 1 :
		printf("TOPLAMA SONUCU %d\n" ,sayi1+sayi2);
		break;
	case 2 :
		printf("�IKARMA SONUCU %d\n" ,sayi1-sayi2);
		break;
	case 3 :
		printf("�ARPMA SONUCU %d\n" ,sayi1*sayi2);
		break;
	case 4 :
		printf("B�LME SONUCU %d\n" ,sayi1/sayi2);
		break;
	default :
		printf("L�TFEN GE�ERL� ��LEM YAPIN");
		break;
		
}
	
	
	
	return 0;
	
	
	
}

