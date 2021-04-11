//每调用一次函数，num加1
#include<stdio.h>
void ADD(int*p)
{	
	(*p)++;
}
int main()
{
	int num=0;
	ADD(&num);
	printf("%d\n",num);
	ADD(&num);
	printf("%d\n",num);
	ADD(&num);
	printf("%d\n",num);
	ADD(&num);
	printf("%d\n",num);
	return 0;
}