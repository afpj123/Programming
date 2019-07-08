#include <stdio.h>

// Scott Paige
// Homework 4 Create your own Function
// CMIS 102
// June 7, 2019

// Function Divides the number by 3 and returns the result
void divide(float x) {
	float v = x/3;
	printf ("\n%.2f divided by 3 equals: %.2f", x,v);
} // End of Function divide

//Function Double	
void dub(float x) {
	float z;
	z = x*x;
	printf("\nDouble of %.2f is: %.2f", x, z);
} // End of Function Double Input	

// Main function to instruct user on what this program does
int main() {
	float x;
	printf ("\nThis function will double the number entered and divide by 3");
	printf ("\nPlease enter a number: ");
	scanf("%f",&x);
	divide(x);
	dub(x);
	return 0;
} // End of Main Function