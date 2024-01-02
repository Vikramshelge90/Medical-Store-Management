#include<string.h>
void search_id()
{
		FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","a+");
		char id[90];
		printf("\n Enter the serarch supplier id:");
		scanf("%s",&id);
		int flag=0;
		
		while(fscanf(fptr,"%s%s%s%s%s",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email)!=EOF)
	{
		if(strcmp(id,s.supp_id)==0)
		{
			flag=1;
			printf("\n--------------id found-----------------------");
			printf("\n %s\t%s\t%s\t%s\t%s\n",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email);
			printf("\n------------------------------------------------");
		}
	}
	if(flag==0)
	{
		printf("\n----------------supplier id not found------------------");
	}

	fclose(fptr);
}
