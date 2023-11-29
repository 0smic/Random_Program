#include <stdio.h>
#define AUTHOR "GOKUL B"
void test(char[], int); /*It is a prototype of the function to check the we didn't miss any parameters when compiling */
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

    /* Achieving same result with for loop and while loop*/
    int num[] = {3,23,53,32,54,453,44,23};
    /* First finding how many index value does it have meaning length */
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
    printf("\nMemory Location of the name var: %p \n", name);
  
    char sample = 'A';
    double gpa = 2.4;
    int id = 23232;
    /*We have another type of data ype pointer, pointer itself is a memory address 
    we can  find the memory address of any data using &var_name 
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
    printf("%d\n", *pAge); /*It actually collect the data stored the memory address*/
    printf("%d\n", *&age); /*This also do the same thing without help of pointer var*/
    /*With string*/
    char unkown = 'G';
    char * pUnkown = &unkown; /*Created a pointer which store memory address of age*/
    printf("%c\n", *pUnkown); /*It actually collect the data store the memory address*/
    printf("%c", *&unkown); /*This also do the same thing without help of pointer var*/


    /*Creating a file and write in it 
    FILE is another data type which is able to store the memory address of the file to open write read the file*/
    
    FILE * fpointer = fopen("text.txt", "a"); /*You can use a , w, r a = append, w = write, r = read*/
    fprintf(fpointer, "Hello how are you?") ;/*Bascially it is also a printing syntax but it will print the content inside the file */
    fclose(fpointer); /*Always make sure you close the opened file in a memory address*/

    /*reading line in the a file*/
    char line[255];
    FILE * fsecpointer = fopen("text.txt", "r"); /*As Mentioed earlier r is used ot read the file*/
    fgets(line, 255, fsecpointer); /*What it does is read the first line of the file If you added more more fgets it will increment and read second line*/
    printf("%s", line);
    fgets(line,255,fsecpointer); /*It will print the second line of the file*/
    printf("%s", line);
    fclose(fsecpointer); /*It reads the second line of file*/
    
    /*fgets only print individual line so use this loop to print 5 line in the file
        for(i=0; i<5; i++){
        fgets(line,255,fsecpointer);
        printf("%s", line);
    }*/
    
    char test_name[] = "Gokul B";
    int age = 18;
    test(test_name, age); /*I created a prototype(in the top of the code) of this function to make sure It fill the require parameters to avoid crashing the porgram*/


    

    /* Without using the typedef this is how struct looks

    struct User
    {
        char name[12];
        int age;
        double gpa;
        };

        struct User user1 = {"Gokul B", 18, 32.2};

    */


    // With using the typedef in struct
    typedef struct
    {
        char name[12];
        int age;
        double gpa;
    }User;

    User user1 = {"Gokul", 32, 23234.23}; //You don't want to type struct again and again
    return 0;
}

void test(char name[], int age){
    printf("my name is %s\nn", name);
    printf("I am %d", age);
    
    
}

