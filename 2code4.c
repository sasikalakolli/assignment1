#include<stdio.h>
void studentall(int student[2][2],int quiz1[2][2],int quiz2[2][2],int marks[2][2],int final[2][2]);
void studentid(int student[2][2],int quiz1[2][2],int quiz2[2][2],int marks[2][2],int final[2][2]);
void hl(int final[2][2]);
main()
{
	int student[2][2],quiz1[2][2],quiz2[2][2],marks[2][2],final[2][2],i=0,j=0,k;
	printf("enter studentid,quiz1,quiz2,marks,final");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter student details");
			scanf("%d%d%d%d%d",&student[i][j],&quiz1[i][j],&quiz2[i][j],&marks[i][j],&final[i][j]);
		}
	}
	printf("\nenter k");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			studentall(student,quiz1,quiz2,marks,final);
			break;
			case 2:
				studentid(student,quiz1,quiz2,marks,final);
				break;
				case 3:
					hl(final);
					break;
					default:
						printf("nothing");
	}
}
void studentall(int student[2][2],int quiz1[2][2],int quiz2[2][2],int marks[2][2],int final[2][2])
{
	int i=0,j=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d\t%d\t%d\t%d\t%d",student[i][j],quiz1[i][j],quiz2[i][j],marks[i][j],final[i][j]);
		printf("\n");
		}
	}
}
void studentid(int student[2][2],int quiz1[2][2],int quiz2[2][2],int marks[2][2],int final[2][2])
{
	int id,i=0,j=0;
	printf("id");
	scanf("%d",&id);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(id==student[i][j])
			{
				printf("quiz1%d\tquiz2%d\tmarks%d\tfinal%d",quiz1[i][j],quiz2[i][j],marks[i][j],final[i][j]);
			}
		}
	}
}
void hl(int final[2][2])
{
	int large=0,small=0,i=0,j=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			large=large>final[i][j]?large:final[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			small=small<final[i][j]?small:final[i][j];
		}
	}
	
}
