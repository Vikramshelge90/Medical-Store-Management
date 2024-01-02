void supp_entry()
{
	FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","a+");
	int count=-1;
	while(fscanf(fptr,"%s%s%s%s%s",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email)!=EOF)
	{
		count++;
	}
	printf("\n Total supplier is:%d",count);
	fclose(fptr);
	
	 
}
