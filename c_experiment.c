#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define AUTHOR "GOKUL B"
void test(char[], int); /*It is a prototype of the function to check that we didn't miss any parameters when compiling to avoid potential security issues*/
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
    /* First finding how many index value does it have, meaning length */
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
    printf("\nMemory Location of the name var: %p \n", name);  // Memory address is the location were the value of name is stored physically in ram or something.
  
    char sample = 'A';
    double gpa = 2.4;
    int id = 23232;
    /*We have another type of data type pointer, pointer itself is a memory address 
    we can  find the memory address of any data using &var_name 
    basically pointer is a type of data that are able to store memory address
    we can create a pointer var like this below(remember naming the varible must contain p first for better understanding)*/
    char * pSample = &sample;
    printf("memory address of pNmae: %p \n", pSample);
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
    FILE is another data type which is able to store the memory address of the file to open, write, read the file*/
    
    FILE * fpointer = fopen("text.txt", "a"); /*You can use( a , w, r) a = append, w = write, r = read*/
    fprintf(fpointer, "Hello how are you?") ;/*Bascially it is also a printing syntax but it will print the content inside the file */
    fclose(fpointer); /*Always make sure you close the opened file in a memory address*/

    /*reading line in the file*/
    char line[255];
    FILE * fsecpointer = fopen("text.txt", "r"); /*As Mentioed earlier r is used ot read the file*/
    fgets(line, 255, fsecpointer); /*What it does is read the first line of the file If you add one more fgets it will increment and read second line*/
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
    

    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
    /*Enum - a user defined type of named integer identifier
                Basically it help the code's readability*/
    /*Let's create a program what say if it a weekend or not*/
    int today = 4;
    if(today==Sun || today==Sat){ // Notice that if we didn't set the enum it will today==1 || today==7 It will more diffcuilt to understand the code other than you.
        printf("\nyeah it's a Weekend, Enjoy");

    }else{
        printf("\nProbabily you need to go to work :(");
    }



     //  How get a random no.
    srand(time(0)); // This is what we called seed Without this it will not work
    int number1 = rand(); // This will choose a no. b/w 0 - 32,767 The is the default of rand()
    int number2 = rand() % 6; // Now this will choose a number b/w 0 - 6
    printf("The first random number b/w (0 - 32,767)  : %d \n", number1);
    printf("The second random number b/w (0 -6)       : %d", number2);


    // Bitwise Operator = Special operators used in bit level programming
    //                        (you want to know about binary to understand this)
    // &    - AND
    // |   - OR
    // ^    - XOP(exclusive OR)
    // <<   - lift shift
    // >>   - Right shift

    // Also representing the binary of the number
    int x = 6; //   6 = 00000110
    int y = 12; // 12 = 00001100
    int z;

    // & operator compare this two to binary and if both have one one in the same position
    // It will assign the resultant 'z' binary will be one in the that position
    z = x & y; // so z = 00000100 ( This binary value is = 4)
    printf("x & y =  %d\n", z);

    // | operator also compare this two binary, If the any of the position in the binary have one.
    // It will assign the one in the that position in the resultant 'z'
    z = x | y; // so z = 00001110 (This binary value is = 14 )
    printf("x | y =  %d\n", z);

    // ^ operator compare this two binary, if any of the position contain only one the second binary contain 0 in the position.
    // It will assign the one in that position  in the resultant 'z'
    z = x ^ y; // so z = 00001010( This binary value is = 10)
    printf("x ^ y =  %d\n", z); 

    // << This operator will shift the 0 or 1 in the left to the right side
    z = x << 1; // z = 00001100 (This binary wil be equal = 12)
    printf("x << 1 =  %d\n", z); 
    z = x << 2; // z = 00011000 (This binary wil be equal = 24)
    printf("x << 2 =  %d\n", z); 
    // Notice that z is doubled when increase the value after <<


    // >> This operator will shift the 0 or 1 in the right to the left side
    z = x >> 1; // z = 00110000 (This binary wil be equal = 3)
    printf("x >> 1 =  %d\n", z); 
    z = x >> 2; // z = 01100000 (This binary wil be equal = 1)
    printf("x >> 2 =  %d\n", z); 
    // Notice that z will half when when increase the value after >>
    
    return 0;
}

void test(char name[], int age){
    printf("my name is %s\n", name);
    printf("I am %d", age);
    
    
}
