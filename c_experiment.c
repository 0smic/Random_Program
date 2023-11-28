#include <stdio.h>

int main(){
    /*This is how we can create and access 2d array*/
    int two_d_array[3][2] = {{2,3},{4,6},{7,5}};
    int i;
    int j;
    for (i=0; i<3; i++){
        for (j=0; j<2; j++){
            printf("%d,", two_d_array[i][j]);
        }
        printf("\n");
    }

    /* Achieving samw result with for loop and while loop*/
    int num[] = {3,23,53,32,54,453,44,23};
    /* First finding how many index value does it have meaning lenght */
    int length = sizeof(num) / sizeof(num[0]);
    printf("last index no. %d \n", length - 1);
    /*Now use the while loop and for loop to access the every data in the num*/
    int r = 0;
    while (r<length){
        printf("%d, ", num[r]);
        r++;
    }
    printf("\n");
    int c;
    for (c=0;c<length;c++){
      printf("%d, ", num[c]);
    }
  
    /*Access the Memory Location*/
    char name[] = "Gokul";
    printf("Memory Location of the name var: %p", name);
  
  
    return 0;
}
