/*
 ============================================================================
 Name        : Oğuzhan Ural
 Number      : 12253065
 		     : Selahattin Akkaş
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>	
//#include <conio.h>	Visual studio da yazılan kod için gerekli kütüphane.


void main()
{
	char kr;	// While koşulu içerisinde kullanıcının işleme devam etmek isteyip istemediğini sınamak için kullanıldı.
	int secilenKarakter; // Switch koşulu içerisine kullanılan değişkenimiz.
	//char c; // switch için kullanıldı.

	do{
	menu();
	//secilenKarakter;
	
	scanf("%d",&secilenKarakter);
	switch(secilenKarakter)
	{
		case 1:
		system("clear");	// veya system("cls"); visual stdio için.
		ucgen();
		break;
		case 2:
		system("clear");
		kare();
		break;
		case 3:
		system("clear");
		Dikdortgen();
		break;
		case 4:
		system("clear");
		eskenarDortgen();
		break;
		case 5:
		system("clear");
		paralelKenar();
		break;
		case 0:
		system("clear");
		cikis();
		break;

		default :
		system("clear");	// Ekranı temizleyen komut. system("cls"); de yazılabilir.
		printf("Hatali veya olmayan bir işlem yaptınız! Devam etmek istiyorsanız Evet(e/E) Hayır(h/H) basınız:");
		//kr=getchar();
		getchar();
		kr=getchar();
		//scanf("%s",kr); -- Bu kod terminalde derlenirken hata veriyor.
		// break; eclipse de hata veriyor diye yazmıştım. // yorumlanmalı ?? **
	}
		//system("clear"); 	// veya system("cls"); 
		
	}while(kr!='h' || kr!='H');
		system("clear");
		//getch();
		getchar();
	}	

int  menu()
{
	int  kar;	// Yaptığımız seçimi atayacağımız değişken.
	printf("Menüden bir islem seciniz: ");
	printf("\n1-Ucgen\n2-Kare\n3-Dikdortgen\n4-Eskenardortgen\n5-Paralelkenar\n0-Cikis\nSeciminiz: ");
	kar=getchar();
	return kar;
}

	int ucgen()
	{

		int ucgenBoyutu;
		printf("Ucgeninizin boyutunu girin: ");
		scanf("%d",&ucgenBoyutu);
		int i,j;
		for(i=1; i<=ucgenBoyutu; i++)
		{
			for(j=0; j<i; j++)
			{
					printf("*");
			}
			printf("\n");
		}
		return 0;
	}

	int kare()
	{
		int kareninKenari;
		int i,j;	// For döngülerinde kullanılacak değişkenler.
		printf("Kareninizin kenar uzunlugunu giriniz: ");
		scanf("%d",&kareninKenari);
		for(i=0; i<kareninKenari; i++)
		{
			for(j=0; j<kareninKenari; j++)
			{
				printf("*");

			}
			printf("\n");
		}

		return 0;
	}
	
	int Dikdortgen()
	  {
	  	int i,j;
	  	int en , boy;
	  	printf("Lutfen dikdortgen icin boy degerini giriniz\n: ");
	  	scanf("%d",&boy);
	  	printf("Lutfen En degerini giriniz: ");
	  	scanf("%d",&en);
	  	for(i=0; i<boy; i++)
	  	{
	  		for(j=0; j<en; j++)
	  		{
	  			printf("*");
	  		}
	  		printf("\n");
	  	}

	  	return 0;
	  }

	int eskenarDortgen()
	{
			int boyut;
			int i,j,k;	// for döngüsü için kullanılacak değişkenler.
			printf("Lutfen eskenar dortgeninizin boyutunu giriniz:(tek sayi girin!) ");
			scanf("%d",&boyut);
			if(boyut % 2 ==1)
		{	
				 
			for(i=1; i<=boyut; i++)
			{
				for(j=0; j<boyut-i; j++)
				{
					printf(" ");
				}
				for(k=0; k<2*i-1; k++)
				{
					printf("*");
				}
				printf("\n");
			}
			for(i=boyut-2;i>0;i--)
			{
				for(j=0;j<boyut-i;j++)
				{
					printf(" ");
				}
				for(k=0;k<2*i-1;k++)
				{
					printf("*");
				}	
				printf("\n");
			}
		}
		else
			printf("Lütfen tek sayi olana bir boyut uzunluğu giriniz! ");

			return 0;
	}

	int paralelKenar()
	{
		int i,j,k; // for döngüsü içinde kullanacağımız değişkenler.
		int buyukKenar,kucukKenar;
		do{
			printf("Lutfen paralelkenarinizin buyuk kenarini giriniz: ");
			scanf("%d",&buyukKenar);
			if(buyukKenar<=0)
			{
				printf("Girdiginiz deger 0 dan kucuk olamaz\n!");
				printf("Pozitif bir tamsayi giriniz:\n");
				getchar();
				system("clear");
			}
			
		   }while(buyukKenar<0);
		   do{
		   	printf("Lutfen paralelkenarinizin kucuk kenarini giriniz:");
		   	scanf("%d",&kucukKenar);
		   	if(kucukKenar<=0)
		   	{
		   		printf("Pozitif bir tamsayi girmelisiniz!\n");
		   		printf("Tekrar islem yapmak için enter'a basınız!\n");
		   		getchar();
		   		system("clear");
		   	}
		   	else if(kucukKenar > buyukKenar)
		   		{
		   			printf("Lutfen kucuk kenarı buyuk kenardan buyuk girmeyiniz!\n");
		   			printf("Tekrar islem yapmak istiyorsanız enter'a basınız\n");
		   			getchar();
		   			system("clear");
		   		}


		   }while(kucukKenar>buyukKenar || kucukKenar<0);
		
		
		for(i=0 ; i<kucukKenar;i++ )

		{
			for(k=0;k<i;k++)
			{
				printf(" ");
			}
			for(j=0; j<buyukKenar; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}
	
	int cikis()
	{
		printf("İşleminiz bitmiştir... Güle güle ");
		/* exit(); fonksiyonu Sublime text 2 de çalışmadı,terminal tarafından derlenmedi.
		 Aşağıdaki kod çalışıyor.*/
		exit(EXIT_SUCCESS);	
		return 0;
	}

