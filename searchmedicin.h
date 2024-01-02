void medi_search()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\medicin.txt","a+");
	char id[90];
	int flag=0;
	
	printf("\n Enter the srech medicine ID:");
	scanf("%s",&id);
	
		while(fscanf(fptr,"%s%s%s%s%d%d%d%d%d%d%d%s%s%s%s%s%s",&m.id,&m.medi_name,&m.rack,&m.cabnit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.bye,&m.pur_date,&m.exp_date,&m.manu_date,&m.manu_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		if(strcmp(id,m.id)==0)
		{
			flag=1;
			printf("\n---------------ID found-------------------");
			printf("\n%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%s\t%s\t%s\t%s\t%s\t%s",m.id,m.medi_name,m.rack,m.cabnit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.bye,m.pur_date,m.exp_date,m.manu_date,m.manu_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name);
	        printf("\n-------------------------------------------");
	        fclose(fptr);
	        break;
		}
    }
   if(flag==0)
	{
		printf("\n ---------------Medicine id not Found-----------------");
	}
}
