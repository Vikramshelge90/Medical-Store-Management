#include<stdio.h>
#include<string.h>

void searchname()
{
	int flag=0;
	char sname[10];
		FILE *fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","r+");
		printf("\n Enter the Search name:");
   	    scanf("%s",&sname);
   	    
   	    while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email)!=EOF)
		{
   		if(strcmp(c.cust_name,sname)==0)
   		{
   			flag=1;
   		    printf("\n---------------Name found-------------------\n");
   		    printf("\n%s\t%s\t%s\t%s\t%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email);
   		    printf("\n-------------------------------------------");
			fclose(fptr); 
			return;	
		}
	
        }

	if(flag==0)
	{
		printf("\n ---------------Name not Found-----------------");
	}
	
}
 
