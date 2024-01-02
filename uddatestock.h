void update_stock()
{
	char medi_name[90];
	char rack[90];
	char cabnit[90];
	char quantity[90];
	char sale[90];
	char total[90];
	char unit[90];
	char cost[90];
	char profit[90];
	char bye[90];
	char pur_date[90];
	char exp_date[90];
	char manu_date[90];
	char bill_no[90];
	char comp_name[90];
	char supp_name[90];
	char custid[90];
	
	int flag=0;
	
	
	printf("\n Enter this  id update: ");
	scanf("%s",&custid);
	FILE *fptr=fopen("D:\\C PROJECT FILE\\medicin.txt","r+");
	FILE *fptr1=fopen("D:\\C PROJECT FILE\\temp.txt","a+");
	
	while(fscanf(fptr,"%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",m.id,m.medi_name,m.rack,m.cabnit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.bye,m.pur_date,m.exp_date,m.manu_date,m.manu_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name)!=EOF)
     {
     	if(strcmp(custid,m.id)==0)
     	{
//     		printf("Enter the id:");
//	scanf("%s",&m.id);
    printf("\n---------------------------ID found--------------------------");
	printf("Enter the medi name:");
	scanf("%s",&m.medi_name);
	printf("Enter the rack:");
	scanf("%s",&m.rack);
	printf("Enter the cabnit:");
	scanf("%s",&m.cabnit);
	printf("Enter the quantity:");
	scanf("%s",&m.quantity);
	printf("Enter the sale:");
	scanf("%s",&m.sale);
	printf("Enter the total:");
	scanf("%s",&m.total);
	printf("Enter the unit:");
	scanf("%s",&m.unit);
	printf("Enter the cost:");
	scanf("%s",&m.cost);
	printf("Enter the profit:");
	scanf("%s",&m.profit);
	printf("Enter the bye:");
	scanf("%s",&m.bye);
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
	
	fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",m.id,m.medi_name,m.rack,m.cabnit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.bye,m.pur_date,m.exp_date,m.manu_date,m.manu_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name);
	continue;
		}
		
		else
		{
			fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",m.id,m.medi_name,m.rack,m.cabnit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.bye,m.pur_date,m.exp_date,m.manu_date,m.manu_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name);
		}
	 }
	 if(flag==0)
	printf("ID not found\n");	
	fclose(fptr);
	fclose(fptr1);
	remove("D:\\C PROJECT FILE\\medicin.txt");
	rename("D:\\C PROJECT FILE\\temp.txt","D:\\C PROJECT FILE\\medicin.txt");
	
}
