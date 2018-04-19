/* File : replay.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

//for player to replay game

#include <stdio.h>
#include "display.h"
#include "miensfeld.h"

char restart(void)
{
    //variable Declarations
    char play;

		//ask the player
		write_message(0,"play again?\n");
		//get y or n
		play=getchar();
		
		//when no y or n
		while(play!='y' || play!='n')
		{
			switch(play)
			{
				//if valid
				case 'y':
				case 'n':
					//return true
					return play;
				default:
					//else wait for valid y or n
					play=getchar();
					break;
    		}
		}
}
