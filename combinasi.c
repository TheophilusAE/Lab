#include <stdio.h>

int fact(int);

int main() {
	int n,r,ncr;
 
  	printf("Enter a number n : ");
  	scanf("%d",&n);
 	printf("Enter a number r : ");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(n-r)*fact(r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
}

int fact(int n) {
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
	}	
return f;
}
