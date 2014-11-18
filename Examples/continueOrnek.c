#include <stdio.h>

void main()
{
	int num1;
	do {
		
		printf("Sayi giriniz:\n");
		scanf("%d",&num1);
		if(num1<=0)	
		{
			continue;
		}
		
		printf("Sayinin karesi : %d\n",num1*num1);


	}while(num1!=100);
	printf("Döngü sonlandı.");
	//getchar();

}