#include<stdio.h>
int binary_search(int arr[],int x,int sz)
{
	int left=0;
	int right=sz-1;

	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<x)
			left=mid+1;
		else if(arr[mid]>x)
			right=mid-1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷����±��Ҳ����ķ���-1
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
		if (ret==-1)
			printf("�Ҳ���\n");
		else 
			printf("�ҵ����±��ǣ�%d\n",ret);

	return 0;
}