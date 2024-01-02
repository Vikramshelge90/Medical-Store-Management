#include<stdio.h>
#include<string.h>

struct billslip
{
	int billno[90];
	char cname[90];
	char mediname[90];
	int medi_qty[90];
	int medi_rate[90];
	int total[90];
	int day[90];
	int month[90];
	int year[90];
};
void  billslip b;
void bill()
{
    FILE *fptr=fopen("D:\\C PROJECT FILE\\medicin.txt","r+");
    
    while(fscanf(fptr,"%s%s%s%s%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabnit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.pur_date,&m.exp_date,&m.manu_date,&m.manu_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF))
	{
		if()
	}
	
}

