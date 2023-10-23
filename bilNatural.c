#include <stdio.h>

int natural (int n);
int main () {
	int n,i,h;
	
	printf ("Masukan Panjang : ");
	scanf ("%d", &n);
	
	printf ("Bilangan natural : ");
	for (i = 1;i <= n ; i++) {
		h = natural (i);
		printf ("%d ",h);
	}
	
return 0;
}

int natural (int n) {\
	int f;
	if (n == 0) {
		f = 0;
	}
	if (n == 1){
		f = 1;
	}
	else {
		f = (natural (n-1) + 1);
	}
	
return f;
} 
