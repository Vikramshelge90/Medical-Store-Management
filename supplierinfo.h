#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"supplier.h"
#include"suppentery.h"
#include"supplist.h"
#include"searchsupplierid.h"
#include"suppliername.h"
#include"supplierupdate.h"
void supplierinfo()
{
	int c;
	do
	{
		printf("\n-----------------------------");
		printf("\n 1-Add Supplier");
		printf("\n 2-Supplier entry ");
		printf("\n 3-Supplier list");
		printf("\n 4-supplier update");
		printf("\n 5-supplier search");
		printf("\n 6-supplier search by id");
		printf("\n 7-supplier search by name");
		printf("\n--------------------------------");
		
		printf("\n Enter the choice:");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:
			    supplier();
			    break;
			
			case 2:
			    supp_entry();
			    break;
			    	
			case 3:
				supp_list();
				break;
				
			case 4:
				supp_update();
				break;
//				
//			case 5:
//				search();
//				break;
				
			case 6:
				search_id();
				break;
				
			case 7:
				search_name();
				break;
				
				default:
					printf("\n ------Wrong choice-----------------");
		}
	}
	while(c<=7);
	
}
