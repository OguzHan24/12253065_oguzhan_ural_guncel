#include <stdio.h>
//#include <conio.h>
void yerdegistir(int * , int *); 	/* yerdegistir(int *a, int *b) seklinde de yazılabilir.*/ 
// yerdegistir(int* , int *) şeklinde tanımlanarak kendisinin a, ve b değişkenlerinin işaretçi değişkenler
//olacağı bildirilmiştir. Bu degerler kendilerine gönderilen tamsayıların verilerini değil , bellekteki 
// adresini tutar.
main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=45; // y değişkenine degeri programcı tarafından atanmıştır.
	printf("Yer degistirmeden önce : x=%d , y=%d\n",x,y);
	yerdegistir(&x,&y); // x ve ye nin adresleri burada formal değişken olarak alınmıştır.
	printf("Yer degistirdikten sonra: x=%d 	y=%d\n",x,y );
	//getch(); 
}

void yerdegistir(int *a, int *b) // yerdegistir(a,b)
								// int *a , *b; şeklinde de tanımlanabilirdi.
{
	int temp; // int g; yer değişikliğini yaparken deger kaybı olmasın diye değişkenlerden birini tutacağımız değişken
	temp = *a;
	*a=*b;
	*b=temp;
}