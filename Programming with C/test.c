#include <stdio.h>
#include <ctype.h>
int main() 
{
    float cost = 0, week1 = -1, week2 = -1, week3 = -1, week4 = -1;
	int c;
	printf("\nThis program is used to calculate The cost of groceries for the Month (4 weeks)\n");
while (cost == 0) 
    {
		while(week1 < 0)   
		{
	        printf("Please enter the cost of groceries for week 1: ");
	        if (scanf("%f ", &week1)==1)
	            printf("Thank You\n");
			else 
		    {
            //The below command will duplicate for every extra character entered		
				while ((c = getchar()) != '\n' && c != EOF); // Flush stdin
				printf("Please Try Again by entering a valid cost ie.Number.\n");
			}
		}
		while (week2 < 0)
	    {
	        printf("Please enter the cost of groceries for week 2: ");
	        if (scanf("%f", &week2)==1)
				printf("Thank You\n");
	        else
		    {
            //The below command will duplicate for every extra character entered		
				while ((c = getchar()) != '\n' && c != EOF); // Flush stdin
			    printf("Please Try Again by entering a valid cost ie.Number.\n");
		    }
		}	
		while (week3 < 0)	
		{
	        printf("Please enter the cost of groceries for week 3: ");
	        if (scanf("%f", &week3)==1)
	    		printf("Thank You\n");    
		    else
			{	
            //The below command will duplicate for every extra character entered		
		        while ((c = getchar()) != '\n' && c != EOF); // Flush stdin
			    printf("Please Try Again by entering a valid cost ie.Number.\n");
		    }
		}
		while (week4 < 0)
        {
	        printf("Please enter the cost of groceries for week 4: ");
	        if (scanf("%f", &week4)==1)
	        	printf("Thank You\n");
			else
			{
            //The below command will duplicate for every extra character entered		
				while ((c = getchar()) != '\n' && c != EOF); // Flush stdin
			    printf("Please Try Again by entering a valid cost ie.Number: \n");
		    }
		}	
	cost = week1 + week2 + week3 + week4;
	}
    printf("The total cost of groceries for the month is $""%.2f", cost);
    
return 0;
}