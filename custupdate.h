#include<stdio.h>
#include<string.h>
void custupdate()
{
	char cust_id[90],cust_name[30],city[30],mob_no[40],email[20];
	int flag=0;
	FILE *fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","r+");//main
	FILE *fptr1=fopen("D:\\C PROJECT FILE\\temp_cust.txt","a+");//temp
	
	printf("\n Enter this  id update: ");
	scanf("%s",&cust_id);
	
	while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email)!=EOF)
	{
		if(strcmp(c.cust_id,cust_id)==0)
		{
			flag=1;
			
			printf("\n Enter the name:");
			scanf("%s",&cust_name);
			printf("\n Enter the city:");
			scanf("%s",&city);
			printf("\n Enter the mob no::");
			scanf("%s",&mob_no);
			printf("\n Enter the email:");
			scanf("%s",&email);
			
			fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\n",cust_id,cust_name,city,mob_no,email);
		
            continue;
		}
		else
		{
			fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\n",c.cust_id,c.cust_name,c.city,c.mob_no,c.email);
		}
	}
	if(flag==0)
	printf("ID not found\n");	
	fclose(fptr);
	fclose(fptr1);
	remove("D:\\C PROJECT FILE\\Medical11.txt");
	rename("D:\\C PROJECT FILE\\temp_cust.txt","D:\\C PROJECT FILE\\Medical11.txt");
	
}
