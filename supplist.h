void 	supp_list()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","a+");
	int count=0;
	while(fscanf(fptr,"%s%s%s%s%s",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email)!=EOF)
	{
		printf("%s\t%s\t%s\t%s\t%s\n",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email);
	}

	fclose(fptr);
	
	 
}
