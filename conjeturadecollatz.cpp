// (numero % 2) == 0
#include <stdio.h>
int n;
main ()
{
	printf ("Conjetura de Collatz \n ingrese el numero: ");
	scanf ("%d", &n);
	while(n!=1){
	printf ("%d ", n);
	if ((n%2)==0)
	{n=n/2;}
	else 
	{n=(n*3)+1;}
	}
}
