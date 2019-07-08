#include <stdio.h>
 //Snake Builder
 //Scott Paige
 // CMIS 102
 // June 27 2019
 
int main()
{
	int dashes, lines, dashesvar, linesvar, total, total2 = 1;
	 
    printf("How long is the Snake? Max is 4 at the time of this program \n");
    if (scanf("%d", &dashes)==1){
    lines = dashes;
	
    for(total = 0; total < total2; total++) {
		if (dashes == 0) {
			printf("\nPlease Try Again!");
		}
		else if (dashes == 1) {
			for (dashesvar = 0; dashesvar < dashes; dashesvar++) {
				printf(" _");
			}
			printf("D~");
			for (linesvar = 0; linesvar < lines; linesvar++) {
				printf("\n|  ");
			}
		}		
		else if (dashes == 2){ 
			for (dashesvar = 0; dashesvar < dashes; dashesvar++) {
				printf(" _");
			}
			printf("-D~");
			for (linesvar = 0; linesvar < lines; linesvar++) {
				printf("\n|  ");
				if (lines >= 1) {
					for (lines = lines-1 ; lines > linesvar; linesvar++){
						printf("_ ");
					}
				}	
				else {
					return 0;
				}
			}
			for (linesvar = 0; linesvar < lines; linesvar++) {
				printf("\n|");
				if (lines >= 1) {
					for (linesvar = linesvar; linesvar < lines; linesvar++){
						printf("_ ");
					}
					for (linesvar = linesvar;linesvar == lines; linesvar++) {
						printf("_|");
			//printf("\n%d,%d", linesvar, lines);
					}
				}			
				else {
					return 0;
				}	
			}
		}
		else if (dashes == 3){ //
			for (dashesvar = 0; dashesvar < dashes; dashesvar++) {
				printf(" _");
			}
			printf("D~");
			for (linesvar = 0; linesvar < lines; linesvar++) {
				printf("\n|  ");
				if (lines >= 1) {
					for (lines = lines -1; lines > linesvar; linesvar++){
						printf("_ ");
					}
				}
				else {
					return 0;
				}
			}
			for (linesvar = 2; linesvar == lines; linesvar++) {
				printf("\n|");
				if (lines >= 1) {
					for (linesvar = 1; linesvar < lines; linesvar++){
						printf(" |");
					}
					for (lines = lines -1; lines < linesvar; lines++) {
						printf("_  ");
					}
					for (linesvar = linesvar-1; linesvar < lines; linesvar++) {
						printf("|");
					}
					//printf("%d,%d", lines, linesvar);
					printf("\n|");
					for (lines = 0; lines < linesvar; lines++){
						printf("_ ");
					}	
					for (linesvar = linesvar ;linesvar == lines; linesvar++) {
						printf("_|");
					}	
						
				}
				else {
					return 0;
				}	
			}
		}
		else if (dashes == 4){ //
			for (dashesvar = 0; dashesvar < dashes; dashesvar++) {
				printf(" _");
			}
			printf("D~");
			for (linesvar = 0; linesvar < lines; linesvar++) {
				printf("\n|  ");
				if (lines >= 1) {
					for (lines = lines -1; lines > linesvar; linesvar++){
						printf("_ ");
					}
				}
				else {
					break;
				}
			}
			for (linesvar = 2; linesvar < lines; linesvar++) {
				printf("\n|");
				if (lines >= 1) {
					for (linesvar = 2; linesvar < lines; linesvar++){
						printf(" |");
					}
					for (lines = lines -1; lines < linesvar; lines++) {
						printf("  _ ");
					}
					for (linesvar = 2; linesvar < lines; linesvar++){
						printf(" |");
					}
					printf("\n|");
					for (linesvar = 2; linesvar < lines; linesvar++){
						printf(" |");
					}
					for (lines = lines -1; lines < linesvar; lines++) {
						printf("_ ");
					}
					for (lines = lines -1; lines < linesvar; lines++) {
						printf("_");
					}	
					for (linesvar = 1; linesvar < lines; linesvar++){
						printf("| ");
					}
					printf("\n|");
					for (lines = 0; lines < linesvar; lines++){
						printf("_ ");
					}	
					for (linesvar = linesvar ;linesvar == lines; linesvar++) {
						printf("_|");
					}
						
				}
				else {
					return 0;
				}
			}
		}
		else {
			break;
		}	
	}		
	printf("\n\nThanks for using Snake Builder\n");
	}
	else {
	    printf("You did not enter a number. Please try again!");
	}	
 return 0;
}