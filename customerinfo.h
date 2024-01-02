#include<stdio.h>
#include<string.h>
#include"customer.h"
#include"searchid.h"
#include"custlist.h"
#include"searchname.h"
#include"custentrey.h"
#include"custupdate.h"


void customerinfo()
{
	int c;
	do
	{
	
	    printf("\n 1-Customer: ");
	    printf("\n 2-cust search: ");
    	printf("\n 3-cust by ID: ");
    	printf("\n 4-cust Search by Name: ");
	    printf("\n 5-cust entry: ");
	    printf("\n 6-cust List:");
	    printf("\n 7-cust Update:");
	    printf("\n------------------------------------------------------\n");
	    
	    printf("\n Enter the choice:");
	    scanf(" %d",&c);
	    
	    switch(c)
	    {
	    	case 1:
	    		customer();
	    		break;
	    		
//	    	case 2:
//	    		display();
//	    		break;
	    		
	    	case 3:
	    		searchid();
	    		break;
	    		
	    	case 4:
	    		searchname();
	    		break;
	    		
	    	case 5:
	    		custentry();
	    		break;
	    		
	    	case 6:
	    		custlist();
	    		break;
	    		
	    	case 7:
	    		custupdate();
	    		break;
	    		
	    	default:
	    		printf("\n Wrong chioce..");
		}
    }
    while(c<=7);
	
}
