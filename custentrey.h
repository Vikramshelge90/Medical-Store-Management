#include<stdio.h>
#include<string.h>

void custentry()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","r+");
	int count=-1;	
	while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email)!=EOF)
	{
		count++;
	}
	printf("\n Total customer is:%d",count);
	fclose(fptr);
}
