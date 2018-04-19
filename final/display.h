/*   File:      display.h
     By:        Tep Dobry
     login:     tep
     Date:      

     This file contains the interface for the display module for the
     miensfeld game.  User defined types and function prototypes are
     specified and explained.
*/

/* The following data type, Glif, is used by the show_glif() function
   to specify the glif image to appear on the board.
*/
enum Glif {TIMMY, SAFE, EMPTY, FLAG, MINE, FL_MINE, EXPLODE };
typedef enum Glif Glif;

void draw_board(void);
/* This function initializes the game board.  It should be called at the
        beginning of each game. It is given and returns nothing.
*/

void clear_screen(void);
/* This function terminates the display.  It should be called at the
        end of the program.  It is given and returns nothing.
*/

void show_glif(Glif glif, int row, int col, int Adj_count);
/*  This function draws a specified glif on the board at the row
        and column specified.  The glif is indicated by the Glif type
        value; one of the symbols listed in the enum type above. The
        adjecency count, if non-zero, is displayed in the lower right
        of the glif.  It is given a Glif, and three integers and returns
        nothing.
*/

void update_mines(int num);
void update_flags(int num);
void update_score(int num);
/*  These three functions are given an integer in the range 0 to 99 and
        update the display of the mines, flags and score, respectively.
        They all return nothing.
*/
