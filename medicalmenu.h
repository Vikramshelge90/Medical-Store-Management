#include<stdio.h>
#include<string.h>
#include"medicin.h"
#include"stock.h"
#include"medientry.h"
#include"searchmedicin.h"
#include"uddatestock.h"

void medicine()
{
	int c;
	do
	{
	    printf("\n 1:Medicine");
		printf("\n 2:Update Stock ");
		printf("\n 3:Medicine Entry");	
		printf("\n 4:Medicine Sale");
		printf("\n 5:Medicine Search ");
		printf("\n 6:Stock");
		printf("\n------------------------------------------");
		printf("\n Enter the choice:");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1:
				medicine1();
				break;
				
//			case 2:
//				update_stock();
//				break;
				
			case 3:
				medi_entry();
				break;
//				
//			case 4:
//				medi_sale();
//				break;
//				
			case 5:
				medi_search();
				break;
				
			case 6:
				stock();
				break;
				
			default:
				printf("\n Wrong Choice..");
		}
	}
	while(c<=6);
	
}
