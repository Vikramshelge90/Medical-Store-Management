
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include"searchid.h"


struct cust
{
    char cust_id[90];
	char cust_name[90];
	char city[90];
	char mob_no[90];
	char email[90];	
};
struct cust c;
void customer()
{
      FILE *fptr;
	fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","a+");
	
//	if(NULL==fptr)
//	{
//		fprintf(fptr,"id\t name\t city\t mob no.\t email",c.city);
//	}
	printf(" \n Enter the customer ID:");
	scanf("%s",&c.cust_id);
	printf(" Customer Name:");
	scanf("%s",&c.cust_name);
	printf(" Customer City: ");
	scanf("%s",&c.city);
	printf(" customer mobile Number:");
	scanf("%s",&c.mob_no);
	printf(" Customer Email:");
	scanf("%s",&c.email);
	fprintf(fptr,"%s",c.cust_id);
    fprintf(fptr,"\t%s",c.cust_name);
    fprintf(fptr,"\t%s",c.city);
    fprintf(fptr,"\t%s",c.mob_no);
    fprintf(fptr,"\t%s\n",c.email);

	
	
	fclose(fptr);
}

