#include <stdio.h>

void printHelp () {
	printf ("\n");
	printf ("a: a(x) = x*x\n");
	printf ("b: b(x) = x*x*x\n");
	printf ("c: c(x) = x^2 + 2*x + 7\n");
	printf ("d: d(x) = x/2\n");
	printf ("e: e(x) = x^2 + y^2\n");
	printf ("q: quit\n");
}
void a(float x) {
	float v = x*x;
	printf (" a(%.2f) = %.2f^2 = %.2f\n", x, x, v);
} // end function a
void b(float x) {
	float v = x*x*x;
	printf (" b(%.2f) = %.2f^3 = %.2f\n", x, x, v);
} // end function b
void c(float x) {
	float v = x*x + 2*x + 7;
	printf (" c(%.2f) = %.2f^2 + 2*%.2f + 7 = %.2f\n",
	x, x, x, v);
} // end function c
void d(float x) {
	float v = x/2;
	printf(" d(%.2f) = %.2f/2 = %.2f\n", x, x, v);
} // end function d
void e(float x, float y) {
	float v = (x*x) + (y*y);
	printf(" e(%.2f,%.2f) = %.2f^2 + %.2f^2 = %.2f\n", x, y, x, y, v);
} // end function e	
int menu () {
	char selection;
	float x,y;
	printHelp ();
	printf("Please make a Selection: ");
	scanf ("%s", &selection);
	if (selection == 'q') return 1;
	printf("Please enter a value for x: ");
	scanf ("%f", &x);
	printf("For Option e only, enter 0 if using another function. Please enter a value for y: ");
	scanf ("%f", &y);
	if (selection == 'a') a(x);
	if (selection == 'b') b(x);
	if (selection == 'c') c(x);
	if (selection == 'd') d(x);
	if (selection == 'e') e(x,y);
	return 5;
} // end function menu
int main() {
	while (menu() == 5);
	printf ("... bye ...\n");
	return 0;
} // end main