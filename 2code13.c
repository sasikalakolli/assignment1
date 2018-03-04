#include<stdio.h>
main()
{
	int a[100],n,sum=0,i=0;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("element\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
printf("sum is %d",sum);
}
