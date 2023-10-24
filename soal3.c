#include <stdio.h>

int fibo (int n) {
	if (n == 0){ 
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return (fibo (n-1) + fibo (n-2));
	}
}

int natural (int j) {
	if (j == 1) {
		return 1;
	}
	else {
		return (natural (j-1) + 1);
	}
	
}

int main () {
	int a,i,hasil;
	printf ("Serba-Serbi Rekrusi\n");
	printf ("===================\n");
	printf ("1. Deret Fibonacci\n");
	printf ("2. Bilangan Natural\n");
	printf ("3. Permutasi\n");
	printf ("4. Kombinasi\n");
	printf ("5. Keluar\n");
	printf ("Pilih >> ");
	scanf ("%d",&a);
	
	if (a == 1) {
		int k;
		printf ("Masukan angka n : ");
		scanf ("%d",&k);
		fibo (k);
		printf ("Deret Fibonacci = ");
		for (i=0;i <= k;i++) {
			printf ("%d",fibo(k));
		}
	}
	else if (a == 2) {
		int l;
		printf ("Masukan angka n : ");
		scanf ("%d",&l);
		hasil = natural(l);
		printf ("Bilangan Natural hingga %d =  ",l);
		for (i=0;i<=l;i++) {
			printf ("%d",hasil);
		}
	}
	else if (a == 3) {
		int m,o;
		printf ("Masukan angka n : ");
		scanf ("%d",&m);
		printf ("Masukan angka r : ");
		scanf ("%d",&o);
		//hasil = permutasi(m)/permutasi (m-o);
		printf ("Hasil %dP%d = %d",m,o,hasil);
	}
	else if (a == 4) {
		int p,q;
		printf ("Masukan angka n : ");
		scanf ("%d",&p);
		printf ("Masukan angka r : ");
		scanf ("%d",&q);
		//hasil = kombinasi(p,q);
		printf ("Hasil %dC%d = %d",p,q,hasil);
	}
	else if (a == 5) {
		return 0;
	}
}
