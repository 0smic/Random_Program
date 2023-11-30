#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

enum process{success = 0, failed = 1};
enum board_features{row_one = 0, row_two = 1, row_three = 2, column_one = 0, column_two = 1, column_three = 2};
const char COMPUTER = 'O';
const char PLAYER = 'X';
char board[3][3]; 
void reset_board(); // This function reset every value in board to ' '
void print_board(); // To track the game this function print the status of broad
int take_input();  // This function will take the input from the user in the row coloum format
void computer_algorithm();  // Thi function used to make computer decision to make the move
void update_board(int,int,char); // This function will update the data into the broad given by the user or computer
void main_loop(); // This will loop the take input print board computer algorthim etc
int free_space();   // This will calculate how much free spaces are left the game
void check_winner(); // This function will check if there is any winner after the user or the computer make a move.
void first_computer_move(); //This function will decide the first move the computer, also avoid the first move computer to over written in the assigned character




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
    printf("\n   |     |    \n");
    printf(" %c |  %c  | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|-----|----\n");
    printf(" %c |  %c  | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|-----|----\n");
    printf(" %c |  %c  | %c\n", board[2][0], board[2][1], board[2][2]);
}

int take_input(){
    int x;
    int y;
    printf("Enter the row(1-3): ");
    scanf("%d", &x);
    x--;
    printf("Enter the column(1-3): ");
    scanf("%d", &y);
    y--;
    if(x<3&&y<3){
        update_board(x,y,PLAYER);
        return success;
    }else{
        return failed;
    }
}

void main_loop(){
    int free_spaces = free_space();
    printf("%d", free_spaces);
    while(free_spaces>0){
        printf("%d", free_spaces);
        print_board();
        int result = take_input();
        if(result==success){
            free_spaces--;  // It will decrease the value of the free space whenever user or computer make a valid move.
            computer_algorithm();
            check_winner();
        }
    }
}


void update_board(int x, int y,char who){
    board[x][y] = who;

}

int free_space(){
    int free_space = 0;
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            if (board[i][j]==' '){
                free_space++; // This loop will increment the free space until out of free space in the board
            }

        }
    }
    return free_space;
}

void first_computer_move(){
    srand(time(0));
    int random_x_cordinate;
    int random_y_cordinate;
    int temp_int = 20; // It is a temp integer which is used to loop to avoid over writtening the assigned character.
    for (int i=0;i<temp_int;i++){
        random_x_cordinate = rand()% 2; //Random no. b/w 0 to 2 
        if (random_x_cordinate==1){ // We don't want 1 to be the x cordinate it will lead to losing game
            random_x_cordinate++; // It will make the 1 to 2
            random_y_cordinate = rand() % 2; //Random no.b/w 1 to 2 for y cordinate
            if (random_y_cordinate==1){ // We don't want y be also 1
                random_y_cordinate++; // it make 1 to 0 if y = 1 
                if(board[random_x_cordinate][random_y_cordinate] == ' '){
                    update_board(random_x_cordinate,random_y_cordinate,COMPUTER); // y == 1, x == 1
                    break;
                }else{
                    continue;
                }   
            }else{ 
                if(board[random_x_cordinate][random_y_cordinate] == ' '){
                    update_board(random_x_cordinate,random_y_cordinate,COMPUTER); //// y !=1, x==1
                    break;
                }else{
                    continue;
                }
            }
        }else{ // x !=1
            random_y_cordinate = rand() % 2; // Random no b/w 0 to 2 
            if (random_y_cordinate==1){ // checking if y==1 
                random_y_cordinate++;
                if(board[random_x_cordinate][random_y_cordinate] == ' '){
                    update_board(random_x_cordinate,random_y_cordinate,COMPUTER); 
                    break;
                }else{
                    continue;
                }
            }else{ // x != 1, y != 1
                if(board[random_x_cordinate][random_y_cordinate] == ' '){
                    update_board(random_x_cordinate,random_y_cordinate,COMPUTER); //// y !=1, x==1
                    break;
                }else{
                    continue;
                }
        }
        }
    }
}

void computer_algorithm(){
    int temp_array[9] = {0}; // temp array is the array we store the value as same as the index no.
    int array[6] = {}; // This is the main array which will remove the zeros from the 
    int temp_int = 0; // This is temp integer which is used to array for loop to assign the index correctly
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i][j] != ' '){
                if (i==0){
                    temp_array[i+j+1] = i+j+1;
                    printf("i+J+1 value given = %d\n", temp_array[i+j+1]);
                }else if (i==1){
                    temp_array[i+j+3] = i+j+3;
                }else if (i==2){
                    temp_array[i+j+5] = i+j+5;
                }
            }
        }
    }

    for (int k=0;k<10;k++){
        if (temp_array[k] != 0){
            array[temp_int] = temp_array[k];
            temp_int ++;
        }
    }

       
    if (array[1] == 0){
        first_computer_move();
    }
}

void check_winner(){
    for (int column=0;column<3;column++){
        if (board[row_one][column]== board[row_two][column] && board[row_one][column]== board[row_three][column]){
            if (board[row_one][column]==PLAYER){
                printf("OHH YOU WIN THE GAME\n");
                printf("HOW IS IT POSSIBLE !");
            }else if (board[row_one][column]==COMPUTER){
                printf("I TOLD YOU IN THE BEIGNING\n");
                printf("I AM THE BEST ALL TIME... go and sleep");
            }
        }
    }
    for (int row=0;row<3;row++){
        if (board[row][column_one]== board[row][column_two] && board[row][column_one]== board[row][column_three]){
            if (board[row][column_one]==PLAYER){
                printf("OHH YOU WIN THE GAME\n");
                printf("HOW IS IT POSSIBLE !");
            }else if (board[row][column_one]==COMPUTER){
                printf("I TOLD YOU IN THE BEIGNING\n");
                printf("I AM THE BEST ALL TIME... go and sleep");
            }
        }
    }
}
