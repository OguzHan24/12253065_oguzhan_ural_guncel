#include <stdio.h>
#include <stdlib.h>

float ortalama(int, int, int );	/* Fonksiyonun bildirimi */
main()
{
	int m,n;
	float k;
	puts("Sayi giriniz: ");
	// printf("Sayi gir:");
	scanf("%d",&m);
	n=17;
	k=ortalama(m,n,40); // 40 değeride fonksiyonun içinde programcı tarafından yazılmıştır.
	printf("ORTALAMA : %f\n",k);
	printf("Cikmak icin bir tusa bas:");
	getchar();

}
float ortalama (int a , int b, int c)
	/*int a , b, c	Formal gösterim. */
{
	float g;
	g = (a + b + c) / 3.0;
	return g;
}