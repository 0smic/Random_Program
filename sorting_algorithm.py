def sort():
    array_size = 80
    input_list = [23,2,43,12,9,1,4,54,65,23]
    array = ['*' for _ in range(array_size)] # Create a array with specified range with special character
    for num in input_list:
        array[num] = num  # Modified the array, with adding the number in the list with the same index value of the number itself
      
      
    #You can do this process downin three ways
    #FIRST WAY
    sort = []
    for i in array:
        if i != '*': # Checking whether it is a special character or a number
            sort = sort + [i] # added the numbers in a new list while removing the special character so we get the sorted list
            
    """
    #SECOND WAY
    sort = [i for i in array if i != '*']
    
    #THRID WAY
    for i in array:
    if i != '*':
        sort.append(i)
        #OR 
        sort += [i]
    """
  
    print(f"Your List :  {input_list}")
    print(f"Sotred List: {sort}")
    

    
sort()
