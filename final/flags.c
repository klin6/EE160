/* File : flags.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

/*function for placing flags*/

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "miensfeld.h"	// where all mines and flag macros are

int place_flag(char c,int *flag,int *mine,int *rows,int *cols,int *sc,int a[MAX_ROW][MAX_COL],int *i_win){
	//variable declare
	int playing,
	    row,
	    col,
	    adj=0,
	    mines,
		flags,score,
		
		win=*i_win;
		row=*rows;
		col=*cols;
		mines=*mine;
		flags=*flag;
		playing=TRUE;

	switch(c){
		//when flag planted to the right
		case F_UP:flags--;
			//if flag planted left
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				//if there is a mine remove from available mines 
				if(a[row-1][col]==MINE){
					a[row][col]=FL_MINE;
					show_glif(FL_MINE,(row-1),col,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				//empty cell then
				if(a[row-1][col]==EMPTY){
					a[row-1][col]=FLAG;
					show_glif(FLAG,(row-1),col,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row-1][col]==SAFE){
					write_message(5,"Cannot put a flag there");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				//if the cell is out of the boundry
				if(row-1<0){
					write_message(5,"throwing away your flags?");
				}
			}
			//if no more flags left
			else{
				write_message(5,"no more flags");
			}
			break;
		//when flag planted to bottom key 'M'
		case F_DOWN:flags--;
			//if flag planted left
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row+1][col]==MINE){
					a[row+1][col]=FL_MINE;
					show_glif(FL_MINE,row+1,col,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row+1][col]==EMPTY){
					a[row+1][col]=FLAG;
					show_glif(FLAG,row+1,col,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row+1][col]==SAFE){
					write_message(5,"Cannot put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				//if the cell is out of the boundry
				if(row+1>MAX_ROW-1){
					write_message(5,"throwing away your flags?");
				}
			}else{
				write_message(5,"no more flags");
			}
			break;
		//when flag planted to left key 'H'
		case F_LEFT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row][col-1]==MINE){
					a[row][col-1]=FL_MINE;
					show_glif(FL_MINE,row,col-1,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row][col-1]==EMPTY){
					a[row][col-1]=FLAG;
					show_glif(FLAG,row,col-1,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row][col-1]==SAFE){
					write_message(5,"Cannot put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(col-1<0){
					write_message(5,"throwing away your flags?");
				}
				show_glif(TIMMY,row,col,adj);
			}else{
				write_message(5,"no more flags");
			}
			break;
		//when flag planted to right key 'K'
		case F_RIGHT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row][col+1]==MINE){
					a[row][col+1]=FL_MINE;
					show_glif(FL_MINE,row,col+1,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row][col+1]==EMPTY){
					a[row][col+1]=FLAG;
					show_glif(FLAG,row,col+1,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row][col+1]==SAFE){
					write_message(5,"Canno put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(col+1>MAX_COL-1){
					write_message(5,"throwing away your flags?");
				}
				show_glif(TIMMY,row,col,adj);
			}else{
				write_message(5,"no more flags.");
			}
			break;
		//when flag planted to right key 'Y'
		case F_UPLEFT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row-1][col-1]==MINE){
					a[row-1][col-1]=FL_MINE;
					show_glif(FL_MINE,row-1,col-1,adj);
					mines--;
					score = score + 2;
					update_score(score);
				}
				if(a[row-1][col-1]==EMPTY){
					a[row-1][col-1]=FLAG;
					show_glif(FLAG,row-1,col-1,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row-1][col-1]==SAFE){
					write_message(5,"Cannot put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(row-1<0 || col-1<0){
					write_message(5,"throwing away your flags");
				}
				show_glif(TIMMY,row,col,adj);
			}
			else{
				write_message(5,"no more flags.");
			}
			break;
		//when flag planted to right key 'N'
		case F_DOWNLEFT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row+1][col-1]==MINE){
					a[row+1][col-1]=FL_MINE;
					show_glif(FL_MINE,row+1,col-1,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row+1][col-1]==EMPTY){
					a[row][col]=FLAG;
					show_glif(FLAG,row,col,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row+1][col-1]==SAFE){
					write_message(5,"Cannot put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(row+1>(MAX_ROW-1) || col-1<0){
					write_message(5,"throwing away your flags?");
				}
				show_glif(TIMMY,row,col,adj);
			}
			else{
				write_message(5,"no more flags.");
			}
			break;
		//when flag planted to right key 'I'
		case F_UPRIGHT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row-1][col+1]==MINE){
					a[row-1][col+1]=FL_MINE;
					show_glif(FL_MINE,row-1,col+1,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row-1][col+1]==EMPTY){
					a[row-1][col+1]=FLAG;
					show_glif(FLAG,row-1,col+1,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row-1][col+1]==SAFE){
					write_message(5,"Cannot put a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(row-1<0 && col+1>(MAX_COL-1)){
					write_message(5,"throwing away your flags?");
				}
				show_glif(TIMMY,row,col,adj);
			}
			else{
				write_message(5,"no more flags.");
			}
			break;
		//when flag planted to right key '<'
		case F_DOWNRIGHT:flags--;
			if(flags>=0){
				//add to flag count
				update_flags(flags);
				if(a[row+1][col+1]==MINE){
					a[row+1][col+1]=FL_MINE;
					show_glif(FL_MINE,row+1,col+1,adj);
					mines--;
					score= score + 2;
					update_score(score);
				}
				if(a[row+1][col+1]==EMPTY){
					a[row+1][col+1]=FLAG;
					show_glif(FLAG,row+1,col+1,adj);
					score--;
					update_score(score);
				}
				//if repeat cell, print message and subtract from score
				if(a[row+1][col+1]==SAFE){
					write_message(5,"Cannot place a flag there.");
					write_message(6,"you lose it.");
					score--;
					update_score(score);
				}
				if(row+1>(MAX_ROW-1) && col+1>(MAX_COL-1)){
					write_message(5,"throwing away your flags");
				}
				show_glif(TIMMY,row,col,adj);
			}
			else{
				write_message(5,"no more flags.");
			}
			break;
		}

		//update mine count on display
		update_mines(mines);
		//if all the mines were found
		if(mines==0){
			win++;
			playing=FALSE;
			write_message(5,"Congratulations!");
			write_message(6,"You made it through.");
		}
		
		//return values
		*sc=score;
		*mine=mines;
		*flag=flags;
		*i_win=win;

		return playing;
}
