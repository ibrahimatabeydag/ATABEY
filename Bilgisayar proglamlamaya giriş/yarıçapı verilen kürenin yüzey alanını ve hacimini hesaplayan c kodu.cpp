#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL , "Turkish");
	
	float yaricap;
	float alan;
	float hacim;

	printf("�l��lerini ��renmek istedi�iniz k�renin yar��ap�n� giriniz  : ");
	
	scanf("%f" ,&yaricap);
	
	alan = 4.0* M_PI * pow(yaricap,2);
	
	hacim = 4.0/3.0 * M_PI * pow(yaricap,3);
	
	
	printf("Alan� : %f...\nHacimi : %f..." ,alan,hacim);
	
	return 0;
	

  
}
