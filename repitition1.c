#include <stdio.h>

int main () {
	int a,i,j;
	int l,n,m;
	
	printf ("Masukan batas : ");
	scanf ("%d",&a);
	printf ("\n");
	
	printf ("Jajargenjang : \n\n");
	for (i = a; i > 0; i--) {
		for (j = 0; j <= i; j++) {
			printf (" ");
		}
		for (j = 0; j <= a; j++) {
			printf ("* ");
		}
		printf ("\n");
	}
	
	printf ("\nSegitiga siku-siku : \n\n");
	
	printf ("\nPola 1\n");
    
    for (l = 1; l <= a; l++) {
        for (m = 1; m <= l; m++) {
        	printf ("*");
        }
        printf ("\n");
    }
    
    printf ("\nPola 2\n");
    
    for (l = 1; l <= a; l++) {
        for (m = a; m >= l; m--) {
           printf ("*");
        }
        printf ("\n");
    }
    
    printf ("\nPola 3\n");
    
    for (l = 1; l <= a; l++) {
        for (m = 1; m < l; m++) {
            printf (" ");
        }
        for (n = a; n >= l; n--) {
            printf ("*");
        }
        printf ("\n");
    }
    
    printf ("\nPola 4\n");
    
    for (l = 1; l <= a; l++) {
        for (m = a; m > l; m--) {
            printf (" ");
        }
        for (n = 1; n <= l; n++) {
            printf ("*");
        }
        printf ("\n");
    }

return 0;
}
