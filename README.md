# Random_Program

- **Guess the Number** - Is a sample game which you need to guess the number which we stored as a variable, You only have 3 attempt. We will tell you, Are you close to the number or not

- **C Experiment**  - Is basically teach You 
  - 2 Dimensional array
  - Prototype of a Function
  - File handling
  - while / for loop
  - other useful stuff
 
    I also Added more comments in it so you can understand more better(So check out)

- **Sorting Algorithm**  - It basically sorts the numbers in the array to ascending or descending order

## Explanation How Sorting Algorithm Work

I try to built my own sorting algorithm Without using any idea or concept of sorting algorithm which already exists.
Here is how,

Imagine You have a list of numbers [23,2,43,12,9,1,4,54,65,23] like this to sort.

Basically My algorithm convert this list into a 2 Dimensional array. Which is similar to this format ( array[80][1] ).

Generally consider like this array[x][y] , and consider number in the list as 'z'.

Now imagine we plot the numbers in the list in a number line. Then 4 will be in 4th position, 65 in the 65th position. so z will be in the zth posistion.

array[4][0] = 4 , array[65][0] = 65 , so generally array[z][0] = z

In the list [23,2,43,12,9,1,4,54,65,23] you can see z not belongs to all +ve whole number.

But we created a 2D array with with a define finite range which belongs 0 to 80.

So there are unfilled positions in the 2D array so we use a special character to fill that space so the array will look like this

{0,&},{1,1},{2,2},{3,&},{4,4},{5,&},{6,&}.............{80,&}

Then we loop into the array and extract the value and make it into a list. It would be look like this

{&,1,2,&,4,&,6,&,...................,&}

Then we remove all the special character in the list, After that you will get the sorted list of the list.

[1,2,4,9,12,23,23,43,54,65]

If you want this in the descending order you can reverse it using basic functions.

### Important 

- This algorithm will take time when dealing with large data set
- It wouldn't give accurate result if it have negative numbers

  I written this algorithm in python and c

  So you can modify the code as like you want.
    


Author = Gokul B
          
          
          
          
          
          
  
