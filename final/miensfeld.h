/* File : miensfeld.h
 * By   : Kylie Lin
 * Login: link6
 * team : Two Teams
 * date : 12/12/17 
 * members: Minyoung Kim, Michael Lieu
*/

//functions and macros for the Miensfeld game								

//#define DEBUG

#define TRUE			1
#define FALSE			0

#define MAX_STR			4
#define MAX_ROW			8
#define MAX_COL			10
//mine macros
#define M_LEFT			'h'
#define M_RIGHT			'k'
#define M_UP			'u'
#define M_DOWN			'm'
#define M_UPLEFT		'y'
#define M_DOWNLEFT		'n'
#define M_UPRIGHT		'i'
#define M_DOWNRIGHT		','
//flag macros
#define F_LEFT			'H'
#define F_RIGHT			'K'
#define F_UP			'U'
#define F_DOWN			'M'
#define F_UPLEFT		'Y'
#define F_DOWNLEFT		'N'
#define F_UPRIGHT		'I'
#define F_DOWNRIGHT		'<'

int startscreen(void);
//options before game starts

int placement(int choice,int a[MAX_ROW][MAX_COL]);
//set the field

int adjacent(int row,int col,int a[MAX_ROW][MAX_COL]);
//returns mines around timmy

int move_timmy(char c,int *rows,int *cols,int *sc,int a[MAX_ROW][MAX_COL],int *i_win);
//	move timmy
int place_flag(char c,int *flag,int*mine,int *rows,int *cols,int *sc,int a[MAX_ROW][MAX_COL],int *i_win);
//	plant flags
char restart(void);
//	replay the game
