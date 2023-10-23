#include <stdio.h>

int main () {
	int a,b,c;
	
	printf ("Masukan 3 angka : ");
	scanf ("%d %d %d",&a,&b,&c);
	
	if ( (a < 0) && (b < 0) && (c < 0)) {
		printf ("Bilangan negatif = 3");
	}
	else if (((a < 0) && (b < 0)) || ((a < 0) && (c < 0)) || ((b < 0) && (c < 0))) {
		printf ("Bilangan negatif = 2");
	}
	else if ((a < 0) || (b < 0) || (c < 0)) {
		printf ("Bilangan negatif = 1");
	}
	else {
		printf ("Tidak ada bilangan negatif");
	}
	
return 0;
}
