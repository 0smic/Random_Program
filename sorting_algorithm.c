#include <stdio.h>

void gain(int num[], int);

int main(){
    int num[] = {1,10,12,3,23,5,7,5,2,9,0};
    int length = (sizeof(num) / sizeof(num[0]));
    gain(num, length);
    return 0;
}

void gain(int num[], int length){
    int numbers[60][1];
 
    
    int r;
    for (r=0;r<length;r++){
        printf("%d, ",num[r] );
        numbers[num[r]][num[r]] = num[r];
    }
    int i;
    int j;
    for(i=0;i<60;i++){
        for(j=0;j<1;j++){
            printf("[%d,%d]\n", numbers[i][j]);
        }
    }
    
    
    

}
