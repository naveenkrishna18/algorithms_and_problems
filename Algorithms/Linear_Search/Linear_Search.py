#Linear Search Algorithm in python
#Linear Search Function
def Linear_Search(array,key,length):
    #loop to iterate to every element
    for i in range (length):
        #comparision
        if array[i] == key:
            #return the position
            return i
    return -1

#Main function
#empty array creation
array = []
#getting array size from user
length = int(input("Enter the size of array : "))
#loop to append the array items into array
for i in range (length):
    array_item = int(input(f"Enter the item no.{i+1} in the array : "))
    array.append(array_item)
key = int(input("Enter the element to search :"))
#calling the function
pos = Linear_Search(array,key,length)
#printing the result
if pos>=0:
    print(f"The element is found in position {pos}")
else:
    print("Element is not in the array")