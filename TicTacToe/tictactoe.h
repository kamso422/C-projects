#ifndef tictactoe_h
#define tictactoe_h
void displayBoard(char board[3][3]);
int checkWin(char board[3][3],int row,char player[], char winner[]);
int checkRows(char board[3][3]);
int checkColumns(char board[3][3]);
int checkDiagonal(char board[3][3]);
#endif