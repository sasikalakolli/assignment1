#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
main()
{
int a,b,i;
printf("enter i value");
scanf("%d",&i);
switch(i)
{
	case 1:
		printf("addition");
		break;
		case 2:
			printf("subtraction");
			break;
			case 3:
				printf("multiplication");
				break;
				case 4:
					printf("division");
					break;
					case 5:
						printf("modulus");
						break;
						default:
							printf("no operation");
}
printf("enter two values");
scanf("%d%d",&a,&b);
switch(i)
{
case 1:
printf("%d",add(a,b));
break;
case 2:
printf("%d",sub(a,b));
break;
case 3:
printf("%d",mul(a,b));
break;
case 4:	
printf("%d",div(a,b));
break;
case 5:
printf("%d",mod(a,b));
break;
default:
	printf("no operation");
}


}
int add(int x,int y)
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}
int mul(int x,int y)
{
	return (x*y);
	
}
int div(int x,int y)
{
	return(x/y);
}
int mod(int x,int y)
{
	return(x%y);
}



