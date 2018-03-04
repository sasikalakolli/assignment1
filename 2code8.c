#include<stdio.h>
main()
{
	int a[5],*p[5],i=0;
	for(i=0;i<5;i++)
	{
		printf("\nenter ");
		scanf("%d",&a[i]);
		p[i]=&a[i];
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",*p[i]);
	}
}
