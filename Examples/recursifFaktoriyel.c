#include <stdio.h>

main()
{
	int sayi;
	 int fakt(int);
	printf("Faktoriyeli hesaplayacak sayiyi gir : ");
	scanf("%d",&sayi);
	printf("%d ! = %1d dir.\n",sayi,fakt(sayi));

}
 int fakt(int a)
{
	 int s;
	if(a>1)
		s=a*fakt(a-1);
	else 
		s=1L;
	return (s);
}