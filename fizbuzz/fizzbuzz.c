/* fizzbuzz.c */
/* classic test for interviews */
/* "Write a program that prints the numbers from 1 to 100. But for 
multiples of three print “Fizz” instead of the number and for the multiples of five print 
“Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”." */
/* author (even if not originator john m howitt */
/* jmhowitt@mac.com */
/* aka PurplePilot */
/* code may not be mine it might be begged borrowed or stolen */
/* so all right acknowldged */


#include <stdio.h>
int main()
{
	// vars
	int loop_start, loop_end, loop_inc;
	loop_start = 0;
    loop_end = 100;
    loop_inc = 1;

	for (int i = loop_start; i < loop_end; ++i)
	{
		/* code */
		if ( i % 3 == 0 )
	    {
	        printf("Fizz\n");
	    }
	    else
	    {
		printf("%30i\n", i);	    	
	    }
	}

}
