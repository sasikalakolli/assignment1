#include<stdio.h>
main()
{
	int a[100],*p[100],n,i=0,count=0;
	printf("enter number of array elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("elements");
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		if(*p[i]<0)
		{
			count++;
		}
	}
	printf("number of negative elements  %d",count);
}
