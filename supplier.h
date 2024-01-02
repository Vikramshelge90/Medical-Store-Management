#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct suppliermenu
{
	char supp_id[90];
	char supp_name[90];
	char temp1mob_no[90];
	char temp1city[90];
	char temp1email[90];
	
};
struct suppliermenu s;

void supplier()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","a+");
	
	printf("\n-----------------------------");
	printf("\n Enter the supplier id:");
	scanf("%s",&s.supp_id);
	printf("Enter the supplier name:");
	scanf("%s",&s.supp_name);
	printf("Enter the supplier mobile number:");
	scanf("%s",&s.temp1mob_no);
	printf("Enter the supplier city:");
	scanf("%s",&s.temp1city);
	printf("Enter the supplier email:");
	scanf("%s",&s.temp1email);
	
	fprintf(fptr,"\t%s",s.supp_id);
	fprintf(fptr,"\t%s",s.supp_name);
	fprintf(fptr,"\t%s",s.temp1mob_no);
	fprintf(fptr,"\t%s",s.temp1city);
	fprintf(fptr,"\t%s\n",s.temp1email);
	
	fclose(fptr);
}
