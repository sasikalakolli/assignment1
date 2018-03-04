#include<stdio.h>
main()
{
	char str[100],copy[100];
	char *pstr,*pcopy;
	int i=0;
	pstr=str;
	pcopy=copy;
	printf("enter string");
	gets(str);
	while(*pstr!='\0')
	{
		*pcopy=*pstr;
		pstr++;
		pcopy++;
	}
	*pcopy='\0';
	printf("the copied text is");
	pcopy=copy;
	while(*pcopy!='\0')
	{
		printf("%c",*pcopy);
		pcopy++;
	}
}
