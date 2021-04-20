#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20],i,j;
	gets(b);
	gets(a);
	for(i=0;a[i]!=0;i++)
	for (j = 0; b[j] != 0; i++,j++)
		a[i] = b[j];
	a[i] = 0;
	puts(a);
	return 0;
}