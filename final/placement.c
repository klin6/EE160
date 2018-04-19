/* File : placement.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

/*layout of board by difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "miensfeld.h"

int placement(int choice, int a[MAX_ROW][MAX_COL])
{
	// Variable declare
	int	row=0,
		col=0,
		safe=0,
		mines=0,
		flags,
		i,
		adj;
	char play;

        //player's chooses difficulty
		switch(choice)
		{
		    //Easy 
			case 1:
			    // 6 mines haven't been placed
				while(mines<6)
				{
				    //Random place mines
					row=rand()%8;
					col=rand()%10;
					if(col>=3 && (a[row][col]!=MINE))
					{
						a[row][col]=MINE;
						show_glif(EMPTY,row,col,adj);
						mines++;
					}
					//mine count on display
					update_mines(mines);
				}
				break;
			
			//Moderate
			case 2:
                		//11 mines haven't been placed
				while(mines<11)
				{
					row=rand()%8;
					col=rand()%10;
					if(col>=3 && (a[row][col]!=MINE))
					{
						a[row][col]=MINE;
						show_glif(EMPTY,row,col,adj);
						mines++;
					}
					update_mines(mines);
				}
				break;
			
			//hard
			case 3:
			    //16 mines haven't been placed
				while(mines<16)
				{
				 
					row=rand()%8;
					col=rand()%10;
					if(col>=3 && (a[row][col]!=MINE))
					{
						a[row][col]=MINE;
						show_glif(EMPTY,row,col,adj);
						mines++;
					}
					update_mines(mines);
				}
				break;
				
			//impossible
			case 4:
			    //20 mines haven't been placed
				while(mines<20)
				{
				    /* "Randomly" place mines */
					row=rand()%8;
					col=rand()%10;
					
					if(col>=2 && (a[row][col]!=MINE))
					{
						a[row][col]=MINE;
						show_glif(EMPTY,row,col,adj);
						mines++;
					}
					update_mines(mines);
				}
				break;
		}

		//place random safezone amount
		while(safe<20)
		{
		    //random coordinates
			row=rand()%7;
			col=rand()%3;
			
			//safezones in the first column
			if(col==0)
			{
			    //Set safezone
				a[row][col]=SAFE;	
				//Calculate adjacent mines
				adj=adjacent(row,col,a);
				//Show safezone on display
				show_glif(SAFE,row,col,adj);
				// Accumulate safezone count 
				safe++;
			}
			
			//if safezone has another safezone to its left
			if(col<=3 && a[row][col-1]<=1)
			{
			    //coordinates are not a mine
				if(a[row][col]!=MINE)
				{
					a[row][col]=SAFE;
					adj=adjacent(row,col,a);
					show_glif(SAFE,row,col,adj);	
				}
				//increment safezone
				safe++;
			}
		}
		
		//Sets amount of mines and flags equal
		flags=mines;
		//update flag count
		update_flags(flags);
		//return number of flags
		return flags;
}
