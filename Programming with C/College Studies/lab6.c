// C code
// This program will calculate the average
// of 3 exams for 5 students.
// Developer: Faculty CMIS102
// Date: Jan 31, XXXX
#include <stdio.h>
int main(void) {
	// variable declarations:
	char name [100];
	float sum, grade, average;
	int students,students2, exams;
	//Initialize Sum
	sum = 0;
	// Prompt user for how many Students it wishes to Calculate the Average
	printf("Thank you for using this program. Please specify the amount of students you wish to average:");
	if (scanf("%d", &students2)==1){
	// loop through User Specified students
	for (students = 0; students < students2; students++) {
		printf ("Enter 3 grades and student name: ");
	for (exams = 0; exams < 3; exams++) {
		// float uses %f, double uses %lf
		scanf ("%f", &grade);
		sum = sum + grade;
	} // end for each exam
		average = sum / 3;
		scanf ("%s", name);
		printf ("Average for %s is %.2f\n", name, average);
	} // end for each student
	printf("... Bye ...\n");
	return 0;
	}
	else {
		printf("You did not specify a value, please try again.");
	}	
} // end main