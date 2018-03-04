#include<stdio.h>
#define max 100
main()
{
	int a[max],n;
	int i=0;
	int small,large;
	printf("enter n");
	scanf("%d",&n);
	printf("enter");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	large=a[0];
	small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
	
		if(a[i]<small)
		{
			small=a[i];
		}
	}

	printf("%d",large);
	printf("%d",small);
}

