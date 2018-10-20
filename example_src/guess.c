#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( )
{
    srand( time( NULL ) ) ;
    int num = ( rand() % 20 ) +1 ;
    int flag = 1 ;
    int guess = 0 ;

    printf( "Guess my number 1-20 : " ) ;
 
    while ( flag == 1 )
    {
	 
	scanf( "%d" , &guess ) ; fflush( stdin ) ;

        if ( guess == 0 )
	{
		printf( "Invalid! Enter only digits 1-20\n" ) ;
		break ;
	}
	else if ( guess < num )
	{
		printf( "Too low, try again : " ) ;
	}
	else if ( guess > num )
	{
		printf( "Too high,try again : " ) ;
	}
	else
	{
		printf( "Correct... My number is %d \n" , num ) ;
		flag = 0 ;
	}
    }
	
    return 0 ;
}