#include<stdio.h>
//�����ж�����
int is_prime(int x)
{
	int j=0;
		for(j=2;j<x;j++)  //�Ż���for(j=2;j<=sqrt;j++)  ��ͷ�ļ�#include<math.h>
		{
			if (x%j==0)
				break;//��return 0��
		}
		if(x==j)//���п���
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