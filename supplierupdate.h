void supp_update()
{
	char id[90];
	char supp_name[90];
	char temp1mob_no[90];
	char temp1city[90];
	char temp1email[90];
    int	flag=0;
	printf("\n Enter the supplier id :");
	scanf("%s",&id);
	
		FILE *fptr=fopen("D:\\C PROJECT FILE\\supplier.txt","r+");
		FILE *fptr1=fopen("D:\\C PROJECT FILE\\temp2.txt","a+");
		
			while(fscanf(fptr,"%s%s%s%s%s",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email)!=EOF)
			{
		       	if(strcmp(id,s.supp_id)==0)
			    {
			    	flag=1;
				    printf("Enter the supplier name:");
	                scanf("%s",&s.supp_name);
                 	printf("Enter the supplier mobile number:");
                	scanf("%s",&s.temp1mob_no);
	                printf("Enter the supplier city:");
                   	scanf("%s",&s.temp1city);
                	printf("Enter the supplier email:");
	                scanf("%s",&s.temp1email);
	                
	                	fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\n",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email);
	                	
	                	continue;
			    }
			    else
			    {
			    	fprintf(fptr1,"%s\t%s\t%s\t%s\t%s\n",s.supp_id,s.supp_name,s.temp1mob_no,s.temp1city,s.temp1email);
				}
			}
			
			if(flag==0)
            printf("\n------------------------------ID not found---------------------------------------");	
	        fclose(fptr);
	        fclose(fptr1);
	        remove("D:\\C PROJECT FILE\\supplier.txt");
            rename("D:\\C PROJECT FILE\\temp2.txt","D:\\C PROJECT FILE\\supplier.txt");
}
