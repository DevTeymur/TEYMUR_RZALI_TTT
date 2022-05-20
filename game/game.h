#ifndef __FUNCS_H__
#define __FUNCS_H__

#include <stdio.h>

//global variables
extern char board[ 8 ], whoWon;

extern int currentPlayer;


//function prototypes
void draw_board();
int ask_coord(int,int);
int coorReturn(char, int); 
void check();


#endif