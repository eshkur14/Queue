/*
**Author	:Eshani Shet Kurtarkar
**Date		:25th Jan'18
**Program	:Implementation of Queue (general)
*/


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"gen_head.h"

int main()
{
	int item, flag,opt;
	char response;

	 do{
		displayIntro("\n*********Program on Queues(Basic concepts)********\n");
		
	
		printf("\n Select a choice");
		printf("\n \t 1. INSERT element");
		printf("\n \t 2. DELETE element");
		printf("\n \t 3. DISPLAY queue");
		printf("\n \t 4. Exit");
		
		printf("\nEnter your choice ::");
		scanf("%d",&opt);
		
		switch(opt)
		{
			case 1:printf("Enter element to be inserted :: ");
				   scanf("%d",&item);
				   insert(item);
				   break;
				
			case 2:item=delete_element();
				   printf("%d is deleted from the queue \n",item);
				  break;
				
			case 3:display();
				break;
			
			case 4:exit(-1);
				   break;
				
			default : printf("You have entered wrong input\n");
				       exit(-1);					
		}
	
		printf("\nDo you want to continue?\n Enter 'Y' or 'N'\n");
		response=getValidResponse();
	
	}
	while(response=='Y');
	return 0;
}




