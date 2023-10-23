#include <stdio.h>

int main () {
	int a,b,c;
	
	printf ("Masukan 3 angka : ");
	scanf ("%d %d %d",&a,&b,&c);
	
	if ((a > b) && (a > c)) {
		printf ("angka terbesar : %d",a);
	}
	else if ((b > a) && (b > c)) {
		printf ("angka terbesar : %d",b);
	}
	else if ((c > a) && (c > b)) {
		printf ("angka terbesar : %d",c);
	}
	
return 0;
}

