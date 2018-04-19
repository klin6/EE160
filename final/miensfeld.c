/* File : miensfeld.c 
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

//main driver

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "miensfeld.h"

int main(){
	// Variable Declarations
	int		playing1,playing2,
			a[MAX_ROW][MAX_COL],
			*rows,row=0,
			*cols,col=0,
			adj=0,
			safe=0,
			*mine,mines=0,
			*flag,flags=0,
			*sc,score,
			*i_win,win=0,
			choice;
	char		c,
			play;

		// Initialize pointers
		rows=&row;
		cols=&col;
		i_win=&win;
		sc=&score;
		mine=&mines;
		flag=&flags;

		// Give instructrions
		choice = startscreen();

		// Initialize array 
		for(row=0;row<MAX_ROW;row++)
			for(col=0;col<MAX_COL;col++)
				a[row][col] = EMPTY;	

		// While the user wants to play
		play = 'y';
		while(play == 'y')
		{
			// Initialize display
			draw_board();


			// Place mines and safezones 
			*flag=placement(choice,a);

			// Set numebr of mines and flags 
			*mine=*flag;

			playing1 = TRUE;
			playing2 = TRUE;

			// Reset values
			*rows = 0;
			*cols = 0;
			adj = 0;
			*sc = 0;

			// Show starting postion 
			a[0][0]=SAFE;
			show_glif(TIMMY,row,col,adj);

			// While the user is still playing
			while(playing1 && playing2)
			{
				// Get user input
				c=getchar();
				// If the user wants to move Timmy
				playing1=move_timmy(c,rows,cols,sc,a,i_win);
				
				// If the user wants to place a flag
				playing2=place_flag(c,flag,mine,rows,cols,sc,a,i_win);
			}

			// Reset values
			row=0;
			col=0;
			adj=0;

			// Show all mines & Reset array 
			for(row=0;row<MAX_ROW;row++)
				for(col=0;col<MAX_COL;col++)
				{
					if(a[row][col]==MINE)
						show_glif(MINE,row,col,adj);
					a[row][col]=EMPTY;
				}

			// Reset mines and safezones
			mines=0;
			safe=0;

			// If user wants to play again
			play = restart();
		}

		// Close game 
		clear_screen();
}
