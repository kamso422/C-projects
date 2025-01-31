    //
    // Created by chikamso on 28/12/24.
    //
    //UPDATED BY CHIKAMSO ON JAN 5TH 2025
    #include <stdio.h>
    #include <string.h>
    #include "tictactoe.h"
     
    int main(){
      char player1[40];
      char player2[40];
      int row, col;
      printf("Welcome to TicTacToe\n");
      char board[3][3] = {{'_','_','_'},
                          {'_','_','_'},
                          {'_','_','_'}};
      printf("\nPlayer one enter your name: \n");
      scanf("%s",player1);
      printf("\nPlayer 2 enter your name:\n");
      scanf("%s",player2);
      for(int i = 1; i<=9; i++){
        char winner[40];
        if(i%2!=0){
          while(1){
            printf("\n\n\n%s enter a row and column to insert your play\n",player1);
            scanf("%d %d",&row,&col);
            if(row > 2 || col > 2){
              printf("\nYour input is out of bound, enter a value between 0-2\n");
              continue;
            }
            if(board[row][col]== 'X' || board[row][col]=='O'){
              printf("\nThis row and column has been writen, choose another");
            }else{
              board[row][col] = 'X';
              const int win = checkWin(board,3,player1,winner);
              if(win==1){
                displayBoard(board);
                printf("\n\n%s wins\n",winner);
                return 0;
              }
              break;
            }
          }
        }
        else{
          while(1){
            printf("\n\n\n%s enter a row and column to insert your play\n",player2);
            scanf("%d %d",&row,&col);
            if(row > 2 || col > 2){
              printf("\nYour input is out of bound, enter a value between 0-2\n");
              continue;
            }
            if(board[row][col]== 'X' || board[row][col]=='O'){
              printf("\nThis row and column has been writen, choose another");
            }else{
              board[row][col] = 'O';
              const int win = checkWin(board,row,player2,winner);
              if(win==1){
                displayBoard(board);
                printf("\n\n%s wins\n",winner);
                return 0;
              }
              break;
            }
          }
        }
        printf("\n\n\n");
        displayBoard(board);
      }
      printf("\n\nTHIS IS A DRAW");
      return 0;
    }