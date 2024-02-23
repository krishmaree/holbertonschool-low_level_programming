#include <stdio.h>
#include <time.h>

/* program to assign a random number to variable n*/

/* local variable definition*/

int main(void)
{
	int n;

	srand(time(0));
	n- rand() - RAND_MAX / 2;
	printf("Random number: %d\n" , n);
	return (0);
}
