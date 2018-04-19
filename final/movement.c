/* File : movement.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

//move timmy function
#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "miensfeld.h"

int move_timmy(char c,int *rows,int *cols,int *sc,int a[MAX_ROW][MAX_COL],int *i_win)
{
	//variable declare
	int	playing=TRUE,
		row=*rows,
		col=*cols,
		score=*sc,
		adj=0,
		win=*i_win,
		choice;

				switch(c)
				{
					//Move up key 'u'
					case M_UP:
						//If in current cell is safe
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						//if the current cell has flag
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						//if the cell up is in bounds
						if(row>0)
							row--;
						//if new cell is empty say safe and increase score
						if(a[row][col]==EMPTY)
						{
							a[row][col]=SAFE;
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
							if(row>0)
							{
								score++;
								update_score(score);
							}
						}
						//if the new cell is safe or flag
						if(a[row][col]==SAFE || a[row][col]==FLAG)
						{
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
						}
						//if the new cell has mine print message after loss
						if(a[row][col]>=MINE)
						{
							a[row][col]=EXPLODE;
							printf("\a");
							show_glif(EXPLODE,row,col,adj);
							write_message(5,"We're going to need");
							write_message(6,"another Timmy!");
							playing=FALSE;
						}
						break;
					//Move down key 'm'
					case M_DOWN:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(row<MAX_ROW-1)
							row++;
						if(a[row][col]==EMPTY)
						{
							a[row][col]=SAFE;
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
							if(row<MAX_ROW)
							{
								score++;
								update_score(score);
							}
						}
						if(a[row][col]==SAFE || a[row][col]==FLAG)
						{
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
						}
						if(a[row][col]>=MINE)
						{
							a[row][col]=EXPLODE;
							printf("\a");
							show_glif(EXPLODE,row,col,adj);
							write_message(5,"We're going to need");
							write_message(6,"another Timmy!");
							playing=FALSE;
						}
						break;
					//Move left key 'h'
					case M_LEFT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(col>0)
							col--;
						if(a[row][col]==EMPTY)
						{
							a[row][col]=SAFE;
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
							if(col>0)
							{
								score++;
								update_score(score);
							}
						}
						if(a[row][col]==SAFE || a[row][col]==FLAG)
						{
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
						}
						if(a[row][col]>=MINE)
						{
							a[row][col]=EXPLODE;
							printf("\a");
							show_glif(EXPLODE,row,col,adj);
							write_message(5,"We're going to need");
							write_message(6,"another Timmy!");
							playing=FALSE;
						}
						break;
					//move right key 'k'
					case M_RIGHT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(col<MAX_COL)
							col++;
						//when win
						if(col==MAX_COL)
						{
							win++;
							score+=10;
							update_score(score);
							playing=FALSE;
							write_message(5,"Congratulations!");
							write_message(6,"you made it through");
						}
						if(col<MAX_COL)
						{
							if(a[row][col]==EMPTY)
							{
								a[row][col]=SAFE;
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
								if(col<=MAX_COL-1)
								{
									score++;
									update_score(score);
								}
							}
							if(a[row][col]==SAFE || a[row][col]==FLAG)
							{
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
							}
							//when lose
							if(a[row][col]>=MINE)
							{
								a[row][col]=EXPLODE;
								printf("\a");
								show_glif(EXPLODE,row,col,adj);
								write_message(5,"We're going to need");
								write_message(6,"another Timmy!");
								playing=FALSE;
							}

						}
						break;
					//move key 'y'
					case M_UPLEFT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(row>0 && col>0)
						{
							row--;
							col--;
						}
						if(a[row][col]==EMPTY)
						{
							a[row][col]=SAFE;
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
							if(row>=0 && col>=0)
							{
								score++;
								update_score(score);
							}
						}
						if(a[row][col]==SAFE || a[row][col]==FLAG)
						{
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
						}
						if(a[row][col]>=MINE)
						{
							a[row][col]=EXPLODE;
							printf("\a");
							show_glif(EXPLODE,row,col,adj);
							write_message(5,"We're going to need");
							write_message(6,"another Timmy!");
							playing=FALSE;
						}
						break;
					//move key 'n'
					case M_DOWNLEFT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(row<(MAX_ROW-1) && col>0)
						{
							row++;
							col--;
						}
						if(a[row][col]==EMPTY)
						{
							a[row][col]=SAFE;
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
							if(row<MAX_ROW && col>=0)
							{
								score++;
								update_score(score);
							}
						}
						if(a[row][col]==SAFE || a[row][col]==FLAG)
						{
							adj=adjacent(row,col,a);
							show_glif(TIMMY,row,col,adj);
						}
						if(a[row][col]>=MINE)
						{
							a[row][col]=EXPLODE;
							printf("\a");
							show_glif(EXPLODE,row,col,adj);
							write_message(5,"We're going to need");
							write_message(6,"another Timmy!");
							playing=FALSE;
						}
						break;
					//move key 'i'
					case M_UPRIGHT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(row>0 && col<MAX_COL)
						{
							row--;
							col++;
						}
						//when win
						if(col==MAX_COL)
						{
							win++;
							score+=10;
							update_score(score);
							playing=FALSE;
							write_message(5,"Congratulations!");
							write_message(6,"You made it through.");
						}
						if(col<MAX_COL && row>=0)
						{
							if(a[row][col]==EMPTY)
							{
								a[row][col]=SAFE;
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
								if(col<MAX_COL && row>=0)
								{
									score++;
									update_score(score);
								}
							}
							if(a[row][col]==SAFE || a[row][col]==FLAG)
							{
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
							}
							//when lose
							if(a[row][col]>=MINE)
							{
								a[row][col]=EXPLODE;
								printf("\a");
								show_glif(EXPLODE,row,col,adj);
								write_message(5,"We're going to need");
								write_message(6,"another Timmy!");
								playing=FALSE;
							}
						}
						break;
					//move key','
					case M_DOWNRIGHT:
						if(a[row][col]==SAFE)
						{
							adj=adjacent(row,col,a);
							show_glif(SAFE,row,col,adj);
						}
						if(a[row][col]==FLAG)
						{
							show_glif(FLAG,row,col,adj);
						}
						if(row<(MAX_ROW-1) && col<MAX_COL)
						{
							row++;
							col++;
						}
						if(col==MAX_COL)
						{
							win++;
							score+=10;
							update_score(score);
							playing=FALSE;
							write_message(5,"Congratulations!");
							write_message(6,"You made it through.");
						}
						if(col<MAX_COL && row<MAX_ROW)
						{
							if(a[row][col]==EMPTY)
							{
								a[row][col]=SAFE;
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
								if(col<MAX_COL && row<MAX_ROW)
								{
									score++;
									update_score(score);
								}
							}
							if(a[row][col]==SAFE || a[row][col]==FLAG)
							{
								adj=adjacent(row,col,a);
								show_glif(TIMMY,row,col,adj);
							}
							if(a[row][col]>=MINE)
							{
								a[row][col]=EXPLODE;
								printf("\a");
								show_glif(EXPLODE,row,col,adj);
								write_message(5,"We're going to need");
								write_message(6,"another Timmy!");
								playing=FALSE;
							}
						}
						break;
				}
			// Return values 
			*rows=row;
			*cols=col;
			*sc=score;
			*i_win=win;
			return playing;
}

