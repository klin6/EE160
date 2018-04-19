/* File : around.c
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

//function counts & returns the number of mines around a cell

#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "miensfeld.h"

int adjacent(int row, int col, int a[MAX_ROW][MAX_COL]){
	//declare variable
	int adj=0;

		//if not beyond the upleft limit increase count if mine present
		if(row>0 && col>0){
			if(a[row-1][col-1]>FLAG)
				adj++;
		}
		//if not beyond the left limit increase count if mine present
		if(col>0){
			if(a[row][col-1]>FLAG)
				adj++;
		}
		//if not beyond downleft limit accumulate if mine present
		if(row<(MAX_ROW-1) && col>0){
			if(a[row+1][col-1]>FLAG)
				adj++;
		}
		//if not beyond the up limit accumulate
		if(row>0){
			if(a[row-1][col]>FLAG)
				adj++;
		}
		//if not beyond the downward limit then increment
		if(row<(MAX_ROW-1))
			if(a[row+1][col]>FLAG)
				adj++;

		//if not beyond upright limit increment
		if(row>0 && col<(MAX_COL-1)){
			if(a[row-1][col+1]>FLAG)
				adj++;
		}
		//if not beyond the right limit increment
		if(col<(MAX_COL-1)){
			if(a[row][col+1]>FLAG)
				adj++;
		}
		//if not beyond the downright then accumulate if there is a mine
		if(row<(MAX_ROW-1) && col<(MAX_COL-1)){
			if(a[row+1][col+1]>FLAG)
				adj++;
		}
		//return the count
		return adj;
}

