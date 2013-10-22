12253065_oguzhan_ural_guncel
============================
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
	char kullaniciadi1[BUFSIZ]="oguzhan"; // Kullanıcı adımızı belirliyoruz.
	char sifre1[BUFSIZ]="123";            // Sisteme giriş şifresi 			
	char kullaniciadi2[BUFSIZ];           // kullaniciadi1 ile karşılaştırma yapacağımız kısım. 
	char sifre2[BUFSIZ];
	int bakiye=3000;                      //
	int cekilenpara=0;		      //	
	int yatirilanpara=0;		      //	
	int secim=0;                          //  Değişkenleri tanımlıyoruz.
	char harf,harf2;                      //
	int hesapno;                          //
	int havale;                           //

	do // Kullanıcı giriş kısmını yapmak için do kullanıyoruz
	{
		printf("\nKullanici adini gir:");
		flushall();
		scanf("%s",&kullaniciadi2);
		printf("\nSifreyi gir:");
		flushall();
		scanf("%s",&sifre2);
		if (strcmp(kullaniciadi1,kullaniciadi2)!=0 && strcmp(sifre1,sifre2)!=0 )
		{
			printf("\nHatali Kullanici adi veya sifre tekrar denemek icin enter a bas!");
			getch();
			system("CLS");
		}
		else
		{
			printf("\nBasari ile giris yapildi! Devam Etmek icin enter'a bas");
			getch();
			break;
		}
	}
	while((strcmp(kullaniciadi1,kullaniciadi2)!=0 && strcmp(sifre1,sifre2)!=0));

	for(;;)
	{        //  Kullanıcı adı ve şifresi üstteki do while döngüsü ile yapılmış oldu.

		system("CLS");
		printf("\n\tBANKA ISLEMLERI BOLUMUNDESINIZ\n");
		printf("\t1-Para Cekme\n");
		printf("\t2-Para Yatirma\n");
		printf("\t3-Bakiye Kontrol\n");                  //  Banka işlem menüsü
		printf("\t4-Havale\n");
		printf("\t5-Cikis\n");
		printf("\t\n-Seciminiz: ");
		scanf("%d",&secim);

		if (secim==1)         		// İf koşulu ile seçimlerimizi programa yaptırıyoruz. Her seçim için if else koşullarını kullanıyoruz
		{
			cekilenpara=0;
			printf("\t\nNe kadar cekmek istiyorsunuz?");
			scanf("%d",&cekilenpara);
			if(bakiye > cekilenpara)
			{
				printf("\tCektiginiz tutar %d\n",cekilenpara);
				bakiye=(bakiye)-(cekilenpara);
				printf("\tHesabinizda %d kalmistir.\n",bakiye);
				printf("\nDevam etmek enter tusuna basin!.");
				getch();
			}
			if(bakiye < cekilenpara)
			{
				printf("Bankamiza borclanacaksiniz. Devam etmek istiyormusunuz(E(e)/H(h)): ");
				scanf("%2c",&harf,&harf2);
				switch(harf)
				{
				case 'e':
				case 'E': bakiye=(bakiye)-(cekilenpara);
					printf("\t Cektiginiz tutar %d bankaya %d borclandiniz.\n",bakiye,cekilenpara);
					printf("\nDevam etmek enter tusuna basin!.");
					getch();
					break;
				case 'h':
				case 'H': printf("\tIsleminiz iptal edilmisir...\n");
					printf("\nDevam etmek enter tusuna basin!.");
					getch();
				}
			}

		}
		else if(secim==2)	
		{
			printf("\t\nNe kadar yatirmak istiyorsunuz:");
			scanf("%d",&yatirilanpara);
			bakiye+=yatirilanpara;
			printf("\tParaniz hesabiniza yatirilmistir.\n");
			printf("\tHesabinizdaki Miktar: %d\n",bakiye);
			printf("\nDevam etmek enter tusuna basin!.");
			getch();
		
		}
		else if(secim==3)
		{
			printf("\tBakiyeniz: %d",bakiye);
			printf("\nDevam etmek enter tusuna basin!.");
			getch();
		}
		else if(secim==4)
		{
			printf("\n Hesap No Giriniz :");
			scanf("%d",&hesapno);
			printf("\n Kac Lira Gondereceksiniz? :");
			scanf("%d",&havale);
			
			if (havale>bakiye)
			{
				printf("\n Yeterli Bakiye Yok");
				printf("\nDevam etmek enter tusuna basin!.");
				getch();
			}
			else
			{
				bakiye=bakiye-havale;
				printf("\n  %d TL %d numarali hesaba gonderildi",havale,hesapno);
				printf("\n Bakiyeniz:%d",bakiye);
				printf("\nDevam etmek enter tusuna basin!.");
				getch();
			}
		
		}
		else if(secim==5)
		{
			printf("\n Cikmak icin Enter'a bas");                   //  Programdan çıkacağımız kısım.
			getch();
			return 0;
		}


	
	
	}
	
}












