#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20],i;
	gets(b);
	for (i = 0; b[i] != 0; i++)
		a[i] = b[i];
	a[i] = 0;
	puts(a);
	return 0;
}