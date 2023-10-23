#include <stdio.h>

int main () {
	int a;
	
	printf ("Masukan nilai : ");
	scanf ("%d",&a);
	
	if (a == 100) {
		printf ("Grade : A");
	}
	else if ((a <= 99) && (a >= 80)) {
		printf ("Grade : B");
	}
	else if ((a <= 79) && (a >= 75)) {
		printf ("Grade : C");
	}
	else {
		printf ("Grade : F");
	}
	
	
	
	return 0;
}
