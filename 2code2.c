#include<stdio.h>
main()
{
	int x[3],i=0,large=0,small=1000;
	printf("enter values");
	for(i=0;i<3;i++)
	{
		scanf("%d",&x[i]);
		large=x[i]>large?x[i]:large;
		small=x[i]<small?x[i]:small;
	}
	printf("large %d\n",large);
	printf("small %d",small);
}
