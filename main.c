#include "game/game.h"

//begin main function
int main() {
    int i, square;    
    for(i = 0; i < 9; i++) board[ i ] = ' ';
    draw_board();
    char col;
    int row;

    while(whoWon == ' ') {
       printf("\n%c\n", whoWon);
       if(currentPlayer == 0 || currentPlayer == 1) {
          printf("\nPlayer X\n");    
          printf("Enter a column character and row number: ");
          scanf("%c %d", &col, &row);

          if(ask_coord(coorReturn(col, row), currentPlayer) == 1)  {
            currentPlayer = 1;
          } else {
            currentPlayer = 2;
          }
          
       } else {
          printf("\nPlayer 0\n");
          printf("Enter a column character and row number: ");
          scanf("%c %d", &col, &row);

          if(ask_coord(coorReturn(col, row), currentPlayer) == 1)  {
            currentPlayer = 2;
   
          } else {
            currentPlayer = 1;
          }
       } 
       draw_board();
       check();
    }

   return (0);
}
