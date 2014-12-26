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

	for (int loop_inc = loop_start; loop_inc < loop_end; ++loop_inc)
	{
		/* code */
		if ( loop_inc % 3 == 0 && loop_inc % 5 == 0)
	    {
	        printf( "%8s\n", "FizzBuzz" );
	    }
		else if ( loop_inc % 3 == 0 )
	    {
	        printf( "%8s\n", "Fizz" );
	    }
	    else if(loop_inc % 5 == 0)
	    {
	        printf( "%8s\n", "Buzz" );
	    }
	    else
	    {
		printf("%8i\n", loop_inc);	    	
	    }
	}

}
