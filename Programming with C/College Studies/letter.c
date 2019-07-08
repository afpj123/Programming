//C Code
//This program will print the letter 
//Developer- Brittany Kidwell
//Modified - Scott Paige
//CMIS 102
//June 27, 2019


#include<stdio.h>
int main ()
{
	int i,j,k,count;
	printf("Please enter a value for how Wide to make a Letter K:");
	if (scanf("%d", &count)==1) 
	{
	
		for(i=0;i<=11;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("*");
			}
			for(k=0;k<=count;k++)
			{
				if(k==count)
				{
					printf("***");
				}
				else
				{
					printf("  ");
				}
			}
			if(i<=5)
			{		
				count--;
			}
			else if(i<=11)
			{	
				count++;
			}	
		printf("\n");
		}
	}
	else {
		return 0;
	}
}

