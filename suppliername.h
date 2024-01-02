#include<string.h>
void search_name()
{
		FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","a+");
		char name[90];
		printf("\n Enter the serarch supplier name:");
		scanf("%s",&name);
		int flag=0;
		
		while(fscanf(fptr,"%s%s%s%s%s",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email)!=EOF)
	{
		if(strcmp(name,s.supp_name)==0)
		{
			flag=1;
			printf("\n--------------Name found-----------------------");
			printf("\n %s\t%s\t%s\t%s\t%s\n",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email);
			printf("\n------------------------------------------------");
		}
	}
	if(flag==0)
	{
		printf("\n----------------supplier Name  not found------------------");
	}

	fclose(fptr);
}
