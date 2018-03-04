#include<stdio.h>
struct date
{
	int day,month,year;
};
main()
{
	struct date d;
	printf("enter day");
	scanf("%d",&d.day);
	printf("enter month");
	scanf("%d",&d.month);
	printf("enter year");
	scanf("%d",&d.year);
	if(d.year%4==0)
	{
		if(d.year%100==0)
		{
			if(d.year%400==0)
			{
				if(d.month==2)
				{
					if(d.day>29)
					{
						printf("enter valid date");
					}
					else
{
	printf("%d/%d/%d",d.day,d.month,d.year);
}
					
				}
			}
		}
	}
if(d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12)
{
	if(d.day>31)
	{
		printf("enter valid date");
	}
	else
{
	printf("%d/%d/%d",d.day,d.month,d.year);
}
}
if(d.month==4||d.month==6||d.month==9||d.month==11)
{
	if(d.day>30)
	{
		printf("enter valid date");
	}
	else
{
	printf("%d/%d/%d",d.day,d.month,d.year);
}
}
if(d.month==2)
{
	if(d.day>28)
{
	printf("invalid date");
}
else
{
	printf("%d/%d/%d",d.day,d.month,d.year);
}
}

}





