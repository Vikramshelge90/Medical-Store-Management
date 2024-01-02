/*Medical Store Management Project Structure
*/

#include<stdio.h>
#include<string.h>
#include"customerinfo.h"
#include"medicalmenu.h"
#include"supplierinfo.h"
#include"billing.h"

int main()
{
	int choice;
	do
	{
		printf("\n------------------Wel-come TO REDDY Medical Store -------------------------");
		printf("\n 1-Customer Info: ");
		printf("\n 2-Medicine: ");
		printf("\n 3-Supplier Info: ");
		printf("\n 4-Billing: ");
		printf("\n 5-About: ");
		printf("\n 6-Exit: ");
		printf("\n---------------------------------------------------");
		
		printf("\n Enter the choice:");
		scanf(" %d",&choice);
		
			switch(choice)
			{
				case 1:
					customerinfo();
					break;
										
				case 2:
					medicine();
					break;
					
				case 3:
					supplierinfo();
					break;
					
				case 4:
					biliing();
					break;
					
//				case 5:
//					abount();
//					break;
//					
//				case 6:
//					exit();
//					break;
					
				default:
					printf("\n Wrong choice.");
			}
			
		}
		while(choice<=6);
	
	return 0;
}
