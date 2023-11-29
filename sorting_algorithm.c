#include <stdio.h>


#define AUTHOR "Gokul B"

void display(int[], int);
void sort(int[], int);

int main(){
    int unsorted_list[] = {34,43,41,1,32,4,65,41,26,11,52,13,43,12,1,2,45,64,66,3,2,2,5,6,2,34};
    int length = sizeof(unsorted_list) / sizeof(unsorted_list[0]);  // Used to find the lenght of unsorted list
    sort(unsorted_list, length);
    return 0;
}

void sort(int list[], int length){
    int i;
    int j;
    int new_array[100];
    int new_array_size = 100; // You need to change this value if the highest number in your list is higher than 100
    for(i=0;i<new_array_size;i++){ 
        for(j=0;j<length;j++){ 
            if(i==list[j]){ // This will confirm that the index number and the number in the list are same when when creating a new array
                new_array[i] = list[j];
            }
        }
    }
    display(new_array,new_array_size);
}

void display(int list[], int length){
    printf("Sorted List: ");
    int i;
    for (i=0;i<length;i++){
        if(list[i]!=0){ // This will ignore if 0 is found in the new array and take all other numbers.
            printf("%d,", list[i]); // printing the sorted numbers in ascending order
        }
    }   
}

/*As You notice the the algorithm really take a good amount of time in sorting large about of dataset
Also it is not functional for repeating number, negative number, complex, irrational number and 0, work only in whole number +ve numbers  */
