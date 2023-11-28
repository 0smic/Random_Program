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
  
    char sample = 'A';
    double gpa = 2.4;
    int id = 23232;
    /*We have another type of data pointer, pointer itself is a memory address 
    we can  find the memory address of amy data using &var_name 
    basically pointer is a type of data that are able to store memory address
    we can create a pointer var like this below(remember naming the varible must contain p first)*/
    char * pName = &sample;
    printf("memory address of pNmae: %p \n", pName);
    printf("memory address of sample: %p \n", &sample);
    /*Look both are same*/
    double * pGpa = &gpa;
    int * pId = &id;
    printf("memory address of GPA: %p \n", pGpa);
    printf("memory address of Id: %p", &pId);

     /*Dereferencing the pointer
    Basically mean we are going to grab the data which is stored in memory address*/
    int age = 18;
    int * pAge = &age; /*Created a pointer which store memory address of age*/
    printf("%d\n", *pAge); /*It actually collect the data store the memory address*/
    printf("%d\n", *&age); /*This also do the same thing without help of pointer var*/
    /*With string*/
    char unkown = 'G';
    char * pUnkown = &unkown; /*Created a pointer which store memory address of age*/
    printf("%c\n", *pUnkown); /*It actually collect the data store the memory address*/
    printf("%c", *&unkown); /*This also do the same thing without help of pointer var*/
    
    return 0;
}
