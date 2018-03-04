#include<stdio.h>
main()
{
	int n,m,*p1,*p2,sum,*p3;
	p1=&n;
	p2=&m;
	p3=&sum;
	printf("enter two numbers");
	scanf("%d%d",&n,&m);

*p3=*p1+*p2;	
	printf("%d",*p3);
}
