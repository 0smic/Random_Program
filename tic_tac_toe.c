#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

const char COMPUTER = 'O';
const char PLAYER = 'X';
char board[3][3]; 
void reset_board(); // This function reset every value in board to ' '
void print_board(); // To track the game this function print the status of broad
void take_input();  // This function will take the input from the user in the row coloum format
void computer_algorithm();  // Thi function used to make computer decision to make the move
void update_board(int,int,char); // This function will update the data into the broad given by the user or computer
void main_loop(); // This will loop the take input print board computer algorthim etc
int free_space();   // This will calculate how much free spaces are left the game
void check_winner(); // This function will check if there is any winner after the user or the computer make a move.




int main(){
    reset_board();
    printf("Let's start the game, I'm Brilliant than you");
    main_loop();
    return 0;
}

void reset_board(){
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            board[i][j] = ' ';
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

void take_input(){
    int x;
    int y;
    printf("Enter the row(1-3): ");
    scanf("%d", &x);
    x--;
    printf("Enter the column(1-3): ");
    scanf("%d", &y);
    y--;
    update_board(x,y,PLAYER);
}

void computer_algorithm(){
    
}

void main_loop(){
    int g;
    int space = 1;
    while(space>0){
        print_board();
        take_input();
    }
}
void update_board(int x, int y,char who){
    board[x][y] = who;
}

int free_space(){
    int free_space;
    for(int i=0;i<3;i++){
        for(int j=0;i<3;j++){
            if (board[i][j]==' '){
                free_space++;
            }
        }
    }
    return free_space;
}
