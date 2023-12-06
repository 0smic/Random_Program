#include <stdio.h>

#define Author "Gokul B";

void range(void);  // similar to the function range in python

int main(){
    range();
    return 0;
}

void range(){
    int i;
    int j;
    printf("Enter the first no.  : ");
    scanf("%d", &i);
    printf("Enter the second no. : ");
    scanf("%d", &j);
    for(i;i<j;i++){
        printf("%d, \n", i);
    }
}
