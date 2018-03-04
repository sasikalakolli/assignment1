#include<stdio.h>
int max(int n,int m);
int min(int n,int m);
main()
{
	int n,m,maximum,minimum;
	printf("enter two numbers");
	scanf("%d%d",&n,&m);
	maximum=max(n,m);
	minimum=min(n,m);
	printf("max=%d",maximum);
	printf("min=%d",minimum);
}
int max(int n,int m)
{
	return(n>m)?n:m;
}
int min(int n,int m)
{
	return(n>m)?m:n;
}
