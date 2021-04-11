#include<stdio.h>
//函数判断素数
int is_prime(int x)
{
	int j=0;
		for(j=2;j<x;j++)  //优化：for(j=2;j<=sqrt;j++)  引头文件#include<math.h>
		{
			if (x%j==0)
				break;//（return 0）
		}
		if(x==j)//可有可无
			return 1;

}
int main ()
{
	int i=0;
	for (i=100;i<=200;i++)
	{
		if(is_prime(i)==1)
			printf("%d\n",i);
	}
	return 0;
}