#include<stdio.h>
main()
{
	int a[100],n,max=0,i=0;
	printf("enter number of data values");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter value %d",i+1);
		scanf("%d",&a[i]);
	max=max>a[i]?max:a[i];
	}
	printf("\n the max value is %d",max);
}
