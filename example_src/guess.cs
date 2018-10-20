using System ;

class Guess
{
	static void Main()
	{
		Random generator = new Random() ;
        		int num = generator.Next( 1 , 20 +1 ) ;
		bool flag = true ;
		int guess = 0 ;

        		Console.Write( "Guess my number 1-20 : " ) ;
        
		while ( flag == true )
        		{
            			int.TryParse( Console.ReadLine() , out guess ) ;
			
			if ( guess == 0 ) 
			{
				Console.Write( "Invalid! Enter only digits 1-20\n" ) ;
				break ;
			}
			else if ( guess < num )
			{
				Console.Write( "Too low, try again : " ) ;
			}
			else if ( guess > num )
			{
				Console.Write( "Too high,try again : " ) ;
			}
			else
			{
				Console.Write( "Correct... My number is " + num + "\n") ;
				flag = false ;
			}
		}
    	}
} ;

/* compile with >csc /out:play-cs.exe play.cs */