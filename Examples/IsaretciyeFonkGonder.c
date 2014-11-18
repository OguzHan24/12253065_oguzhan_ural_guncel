#include <stdio.h>
//#include <conio.h>

float ortalama(int a, int b)
{
	float orta;
	orta = (a + b) / 2.0;
	return orta;	
}

main()
{
	int x,y;
	
	float f;
	
	/* Burada fonksiyonun bulunduğu adresi *q adlı işaterçiye atmak için gerekli
	   tanımlamayı yaptık. Fonksiyonun dönüş değeri float olduğu için
	   tipi float *q şeklinde parametreleri int olduğu için (int , int ) şeklinde tanımlanmıştır.
	*/
	float (*q) (int , int ); 
	q=ortalama;	// Fonksiyonun başlangıç adresi q ya atanıyor. Parantez konmuyor! 
	printf("Lutfen iki sayi gir:\n ");
	scanf("%d %d",&x,&y);
	f= q(x,y); // Burada gerekli değerleri fonksiyonumuzun adresini tutan q değişkeninde girdik. x ve y değerleri.
	printf("Sayilarin ortalamaması %f\n dir : ",f);

}