#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct medicine_menu{
	char id[90];
	char medi_name[90];
	char rack[90];
	char cabnit[90];
	int quantity;
	int sale;
	int total;
	int unit;
	int cost;
	int profit;
	int bye;
	char pur_date[90];
	char exp_date[90];
	char manu_date[90];
	char bill_no[90];
	char comp_name[90];
	char supp_name[90];
	
};
struct medicine_menu m;
void medicine1()
{
	
	FILE *fptr=fopen("D:\\C PROJECT FILE\\medicin.txt","a+");
	printf("Enter the id:");
	scanf("%s",&m.id);
	printf("Enter the medi name:");
	scanf("%s",&m.medi_name);
	printf("Enter the rack:");
	scanf("%s",&m.rack);
	printf("Enter the cabnit:");
	scanf("%s",&m.cabnit);
	printf("Enter the quantity:");
	scanf("%d",&m.quantity);
	printf("Enter the sale:");
	scanf("%d",&m.sale);
	printf("Enter the total:");
	scanf("%d",&m.total);
	printf("Enter the unit:");
	scanf("%d",&m.unit);
	printf("Enter the cost:");
	scanf("%d",&m.cost);
	printf("Enter the profit:");
	scanf("%d",&m.profit);
	printf("Enter the bye:");
	scanf("%d",&m.bye);
	printf("Enter the purchase date:");
	scanf("%s",&m.pur_date);
	printf("Enter the expiry date:");
	scanf("%s",&m.exp_date);
	printf("Enter the manufacturing date:");
	scanf("%s",&m.manu_date);
	printf("Enter the bill no:");
	scanf("%s",&m.bill_no);
	printf("Enter the company name:");
	scanf("%s",&m.comp_name);
	printf("Enter the supply name:");
	scanf("%s",&m.supp_name);
	
	fprintf(fptr,"%s",m.id);
	fprintf(fptr,"\t%s",m.medi_name);
	fprintf(fptr,"\t%s",m.rack);
	fprintf(fptr,"\t%s",m.cabnit);
	fprintf(fptr,"\t%d",m.quantity);
	fprintf(fptr,"\t%d",m.sale);
	fprintf(fptr,"\t%d",m.total);
	fprintf(fptr,"\t%d",m.unit);
	fprintf(fptr,"\t%d",m.cost);
	fprintf(fptr,"\t%d",m.profit);
    fprintf(fptr,"\t%d",m.bye);
	fprintf(fptr,"\t%s",m.pur_date);
	fprintf(fptr,"\t%s",m.exp_date);
	fprintf(fptr,"\t%s",m.manu_date);
	fprintf(fptr,"\t%s",m.bill_no);
	fprintf(fptr,"\t%s",m.comp_name);
	fprintf(fptr,"\t%s",m.supp_name);
	
	fclose(fptr);	
	
	
	
}
