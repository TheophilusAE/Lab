#include <stdio.h>

int main (){
	int i,j,k,n,m;
	printf ("Masukan Baris : ");
	scanf ("%d",&n);
	printf ("Masukan Kolom : ");
	scanf ("%d",&m);
	for (i=0;i<=n;i++) {
		for (j = 0; j<i ;j++){
			printf (" ");
		}
		for (k=0; k < m;k++) {
			printf ("*");
		}
	printf ("\n");
	}
}
