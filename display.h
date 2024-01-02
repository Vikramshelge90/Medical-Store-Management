#include<stdio.h>
#include<string.h>
void custlist()
{

FILE *fptr=fopen("D:\\C PROJECT FILE\\Medical11.txt","r+");

while(fscanf(fptr,"%s%s%s%s%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email)!=EOF){
	   
   		printf("\n%s\t%s\t%s\t%s\t%s",c.cust_id,c.cust_name,c.city,c.mob_no,c.email);
   	}
   	fclose(fptr); 
   	
}
