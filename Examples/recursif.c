#include <stdio.h>

main()
{
	rekursifonk(5);
	getchar();
}

rekursifonk(int a)
{
	if(a<1) return ;
	printf("Gelen sayi %d\n",a);
	rekursifonk(a-1);
}