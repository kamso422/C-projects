#include "tictactoe.h"
#include <string.h>
#include <stdio.h>

void displayBoard(char board[3][3]){
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          j != 2 ? printf("%c\t|\t",board[i][j]):printf("%c",board[i][j]);
        }
        printf("\n");
      }
    }
int checkRows(char board[3][3]){
      for(int i = 0; i < 3; i++){
        if(board[i][0] !='_') {
          if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) {
            return 1;
          }
        }
      }
      return 0;
    }    
int checkColumns(char board[3][3]){
      for(int i = 0; i < 3; i++){
        if(board[0][i]!='_') {
          if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;
        }
      }
      return 0;
    }
int checkDiagonal(char board[3][3]){
      if (board[1][1] != '_') {
        if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
          return 1;
        if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
          return 1;
      }
      return 0;
    }
int checkWin(char board[3][3], const int row,char player[],char winner[]){
      const int condition1 = checkRows(board);
      const int condition2 = checkColumns(board);
      const int condition3 = checkDiagonal(board);
      if(condition1==1 || condition2==1 || condition3==1) {
        strcpy(winner,player);
        return 1;
      }
      return 0;
    }    