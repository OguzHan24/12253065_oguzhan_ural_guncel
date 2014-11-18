#include <stdio.h>
// #include <conio.h> 	Visual Stdio için yazılabilir.
main()

{
	int sayi = 24;
	int kullaniciSayisi;
	int comp;	
		
	do{
		printf("Lütfen bir sayi giriniz:\n ");
		scanf("%d",&kullaniciSayisi);
		if(sayi== kullaniciSayisi)
			printf("Sayiniz sistemin sayisina eşittir.");
		
		else
			printf("Sayiniz sistemin sayisina eşit değil!\n");


	}while(sayi!=kullaniciSayisi);

	printf("Döngü bitti!");
	//getch(); ---> Visual Stdio'da yazılmalı.
	//printf("Girdiğiniz sayi sistemin sayisina eşittir! ");
}