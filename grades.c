#include<stdio.h>
void main()
{
	int marks=0;
	printf("enter marks of the student:\n");
	scanf("%d",&marks);
	if (marks>=85)
	{
		printf("the student got GRADE A\n");
	}
	else if(marks>=70)
	{
		printf("the student got GRADE B\n");
	}
	else if (marks>=55)
	{
		printf("the student got GRADE C\n");
	}
	else if (marks>=40)
	{
		printf("the student got GRADE D\n");
	}
	else 
	{
		printf("the student got GRADE F\n");
	}
	
	
	
	
	
}
