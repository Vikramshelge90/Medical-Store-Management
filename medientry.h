#include<stdio.h>
#include<string.h>

void medi_entry()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\medicin.txt","a+");
	int count=0;
	
	while(fscanf(fptr,"%s%s%s%s%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabnit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.pur_date,&m.exp_date,&m.manu_date,&m.manu_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		count++;
    }
    fclose(fptr);
    printf("\n total medicin count is:%d",count);
    printf("\n-----------------------------------\n");
}
