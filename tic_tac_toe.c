#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

const char COMPUTER = 'X';
const char PLAYER = 'O';
char board[3][3]; 
void reset_board(); // This function reset every value in board to ' '
void print_board(); // To track the game this function print the status of broad
void take_input();  // This function will take the input from the user in the row coloum format
void computer_algorithm();  // Thi function used to make computer decision to make the move
int free_space();   // This will calculate how much free spaces are left the game
void check_winner(); // This function will check if there is any winner after the user or the computer make a move.


int main(){
    reset_board();
    printf("Let's start the game, I'mBrilliant than you");
    print_board();
    return 0;
}

void reset_board(){
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j] = 'X';
        }
    }
}

void print_board(){
    printf("   |     |    \n");
    printf(" %c |  %c  | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|-----|----\n");
    printf(" %c |  %c  | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|-----|----\n");
    printf(" %c |  %c  | %c\n", board[2][0], board[2][1], board[2][2]);
}
