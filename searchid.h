//FILE *ptr;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void searchid()
{

	int flag=0;
	char sid[10];

   	
   	FILE *fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","r+");
   	   	printf("\n Enter the Search ID:");
   	    scanf("%s",&sid);
   	while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email)!=EOF)
	   {
   		if(strcmp(c.cust_id,sid)==0)
   		{
   			flag=1;
   		    printf("\n---------------ID found-------------------\n");
   		    printf("\n%s\t%s\t%s\t%s\t%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email);
   		    printf("\n-------------------------------------------");
			fclose(fptr); 
			return;	
		}
	 
        }
	if(flag==0)
	{
		printf("\n ---------------id not Found-----------------");
	}
	
}
