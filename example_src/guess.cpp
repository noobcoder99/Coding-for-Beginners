#include <iostream>
#include <cstdlib>
#include <ctime>
 
int main()
{
    srand( time( 0 ) ) ;
    int num = ( rand() % 20 ) +1 ;
    bool flag = true ;
    int guess = 0 ;

     std::cout << "Guess my number 1-20 : " ;
    
    while( flag == true )
    {
	 std::cin >> guess ;  std::cin.ignore( 256 , '\n' ) ; 

	if ( guess == 0 )
	{
		std::cout << "Invalid! Enter only digits 1-20\n" ;
		break ;
	}
	else if ( guess < num )
	{
		std::cout << "Too low, try again : " ;
	}
	else if ( guess > num )
	{
		std::cout << "Too high,try again : " ;
	}
	else
	{
		std::cout << "Correct... My number is " << num << "\n" ;
		flag = 0 ;
	}
    }
	
    return 0;
}
