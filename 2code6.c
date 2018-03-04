#include<stdio.h>
main()
{
	int a[5],i=0;
	for(i=0;i<5;i++)
	{
		printf("enter element");
		scanf("%d",a+i);
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(a+i));
	}
}
