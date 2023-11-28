#include <stdio.h>

#define AUTHOR "GOKUL B"
#define SECRET_NUMBER 5
#define MAX_ATTEMPT 2

void game_func() {
    int num = SECRET_NUMBER;
    int max_attempt = MAX_ATTEMPT;
    int attempt = 0;
    int guess = 0;
    int difference;
    while (guess != num){
        printf("Enter the No.");
        scanf("%d", &guess);
        if (attempt == max_attempt){
            printf("No more attempt left");
            break;
        }else{
            difference = guess - num;
            if (difference == 1 || difference == -1){
                printf("So close\n");  
            } else if(difference>1){
                printf("Too high\n");          
            } else if(difference<-1){
                printf("Too low \n");
            }
        }
        attempt++;
    }
    if (guess==num){
        printf("You fuking Guessed it!");
    }else {
        printf("Sorry to say, You lose");
    }
}

int main(){ 
    game_func();
    return 0;
}
