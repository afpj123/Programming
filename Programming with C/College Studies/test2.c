#include <stdio.h>
#include <ctype.h>
int main() 
{
    float week1 = -1;
	char c;
	printf("\nThis program is used to calculate The cost of groceries for the Month (4 weeks)\n");
	        printf("Please enter the cost of groceries for week 1: ");
	        if (scanf("%f ", &week1)==1)
	            printf("%.2f", week1);
			else 
		    {
            //The below command will duplicate for every extra character entered		
				while ((c = getchar()) != '\n' && c != EOF); // Flush stdin
				printf("Please Try Again by entering a valid cost ie.Number.\n");
			}	
return 0;
}