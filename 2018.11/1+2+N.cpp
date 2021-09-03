# include <stdio.h>
int main ()
{
	long long n=1000000000;
	n=(1+n)*n/2;
	printf("%I64d",n);
	return 0;
}
