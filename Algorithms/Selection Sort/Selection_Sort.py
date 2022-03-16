#swap function
def swap(a,b):
    return b,a

#Selection Sort Function
def selection_sort(array,length):
    #first loop
    for i in range (0,length):
        min_idx = i
        #second loop
        for j in range (i+1,length):
            #comparision
            if(array[j] < array[min_idx]):
                min_idx = j
        #calling swap function
        array[i],array[min_idx] = swap(array[i],array[min_idx])
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
sorted_array = selection_sort(array, length)
#printing the sorted list
print(f"The Sorted Array : {sorted_array}")

#Time Complexity is: O(N^2)