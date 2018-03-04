#include<stdio.h>
main()
{
	int a[100],e[100],o[100],n,i=0,j=0,k=0;
	printf("enter number of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
		}
		else
		{
			o[k]=a[i];
			k++;
		}
		
	}
	printf("even");
	for(i=0;i<j;i++)
	{
		printf("  %d",e[i]);
	}
	printf("\n");
	printf("odd");
	for(i=0;i<k;i++)
	{
		printf("  %d",o[i]);
	}
	}
