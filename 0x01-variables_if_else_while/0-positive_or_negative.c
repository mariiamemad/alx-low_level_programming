#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if (n>0){
	  return "is positive";
	}
	else if (n>0){
	  return "is negative";
	}
	else{
	  return "is zero";
	}
	    

	return (0);
}