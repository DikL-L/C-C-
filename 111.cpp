#include<stdio.h>
int fun(int n,int a)
{
	int t=0,sum=0,i;
	for(i=0;i<n;i++)
		{
			t=t*10+a;
			sum=a+t;
		}
	return sum;
}


void main()
{
	int n,a,sum;
	printf("输入n和a的值\n");
	scanf("%d%d",&n,&a);
	sum=fun(n,a);
	printf("%d+%d%d+...=%d\n",a,a,a,sum);
}
