#include<stdio.h>
main()
{
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	printf("rows");
	scanf("%d",&r);
	printf("columns");
	scanf("%d",&c);
	printf("enter fist matrix elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nelement%d%d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("second matrix elements");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nelement%d%d",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum is");
for(i=0;i<r;i++)
{
	printf("\n");
	for(j=0;j<c;j++)
	{
		printf("\t %d",sum[i][j]);
	}
}
	}
