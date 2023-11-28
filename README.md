# Random_Program

- **Guess the Number** - Is a sample game which you need to guess the number which we stored as a variable, You only have 3 attempt. We will tell you, Are you close to the number or not

- **C Experiment**  - Is basically teach You 
  - 2 Dimensional array
  - Prototype of a Function
  - File handling
  - while / for loop
  - other useful stuff
 
    I also Added more comments in it so you can understand more better(So check out)

- Sorting Algorithm  - It basically sorts the numbers in the array to ascending or descending order

## Explanation How Sorting Algorithm Work

I try to built my own sorting algorithm Without using any idea or concept of sorting algorithm which already exists.
Here is how,

Imagine you get a list of number like this [23,2,43,12,9,1,4,54,65,23] 

well my algorthim convert this list into a 2 dimension array Which i like look this ( array[65][1] ) kinda format.

Let's call like this array[x][y]. The x represent the position and y present the number which in the list.

if you draw a number line of whole number the number y always in the y position

4 will in the 4th position, 10 in the 10th position so y in yth position.

x = y (if y is a number in the list)

if y is not a number in the list we would assign it with a special character.


after we convert to 2 dimensional array it would look like this.

{0,"*},{1,1},{2,2},{3,"*},{4,4},{5,"*},{6,"*}.............{65,65}

Now we take all the value in the y position change to list.

The list would look like this.
("*,1,2,"*,4,"*,6,"*,...................65}

Now using some function remove the special character in the list. Then you would have the Sorted list in the ascending order.

look like this.
[1,2,4,9,12,23,23,43,54,65]

You can use basic C syntax to make it descending order(reverse it)

#### Important 

This algorithm will take time when dealing with large data set
It wouldn't give accurate result if it have negative numbers



        


Author = Gokul B
          
          
          
          
          
          
  
