#include <stdio.h>

int main ( ) {
	int a;
	printf ("Menu Navigasi\n");
	printf ("1. Positive or Negative\n");
	printf ("2. Grading\n");
	printf ("3. Largest Number\n");
	printf ("Pilihan Menu : ");
	scanf ("%d",&a);
	
	if (a == 1) {
		while (1) {	
			int i,j,k;
			printf ("\nMasukan 3 angka : ");
			scanf ("%d %d %d",&i,&j,&k);
			
			if ((i < 0) && (j < 0) && (k < 0)) {
				printf ("3 angka negatif\n\n");
			}
			else if (((i < 0) && (j < 0))|| ((i < 0) && (k < 0)) || ((k < 0) && (j < 0))) {
				printf ("2 angka negatif\n\n");
			}
			else if ((i <0) || (j < 0) || (k < 0)) {
				printf ("1 angka negatif\n\n");
			}
			else {
				printf ("tidak ada angka negatif\n\n");
			}
		}
	}
	else if (a == 2) {
		while (1) {
			int n;
			printf ("\nMenu nilai\n");
			printf ("Masukan nilai : ");
			scanf ("%d",&n);
			
			if ((n <= 100) && (n >= 85)) {
				printf ("Grade A\n\n");
			}
			else if ((n <= 84) && (n >= 70)) {
				printf ("Grade B\n\n");
			}
			else if ((n <= 69) && (n >= 65)) {
				printf ("Grade C\n\n");
			}
			else if ((n <= 64) && (n >= 50)) {
				printf ("Grade D\n\n");
			}
			else if ((n <= 49) && (n >= 0)) {
				printf ("Grade E\n\n");
			}
		}
	}
	else if (a == 3) {
		while (1) {
			int b,c,d;
			printf ("\nMasukan 3 angka : ");
			scanf ("%d %d %d",&b,&c,&d);
			
			if ((b > c) && (b > d)) {
				printf ("%d\n\n",b);
			}
			else if ((c > b) && (c > d)) {
				printf ("%d\n\n",c);
			}
			else if ((d > c) && (d > b)) {
				printf ("%d\n\n",d);
			}
		}
	}
	
	
return 0;
}
