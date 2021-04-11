#include<stdio.h>
int main()
{
	float score[9];
	int i,sum=0;
	for(i=0;i<9;i++)
	{
		scanf("%f",&score[i]);
		sum=sum+score[i];
	}
	int imax=0,imin=0;
	for(i=1;i<9;i++)
	{
		if(score[i]>score[imax])
			imax=i;
	}
	for(i=1;i<9;i++)
	{
		if(score[i]<score[imin])
			imin=i;
	}
	float average=(sum-score[imax]-score[imin])/7;
	printf("%f\n",average);
	return 0;
}