#swap function
def swap(a,b):
    return b,a

#Bubble Sort Function
def bubble_sort(array):
    n = len(array) #length of the array
    #first loop
    for i in range (0,n): 
        #second loop
        for j in range(0,n-i-1): 
            #comparision
            if array[j] > array[j+1]: 
                #calling swap function
                array[j],array[j+1] = swap(array[j],array[j+1]) 
    
    return array


#Main function
#empty array creation
array = []
#getting array size from user
length = int(input("Enter the size of array : "))
#loop to append the array items into array
for i in range (length):
    array_item = int(input(f"Enter the item in array position {i+1} : "))
    array.append(array_item)
#calling the bubble sort function and storing the return value in a array
sorted_array = bubble_sort(array)
#printing the sorted list
print(f"The Sorted Array : {sorted_array}")