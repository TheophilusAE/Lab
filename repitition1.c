#include <stdio.h>

int main () {
	int a,i,j;
	
	printf ("Masukan batas : ");
	scanf ("%d",&a);
	printf ("\n");
	
	for (i = a; i > 0; i--) {
		for (j = 0; j <= i; j++) {
			printf (" ");
		}
		for (j = 0; j <= a; j++) {
			printf ("* ");
		}
		printf ("\n");
	}

return 0;
}
