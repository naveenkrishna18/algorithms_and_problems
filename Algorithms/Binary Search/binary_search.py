#Binary Search Algorithm in python
#Binary Search Function
def binary_search(array,key,low,high):
    mid = int((low+high)/2)
    #comparision
    if low == high :
        if array[low] == key:
            return low
        else:
            return -1
    elif array[mid] == key:
        return mid
    elif array[mid] > key:
        return binary_search(array,key,low,mid-1)
    else:
        return binary_search(array,key,mid+1,high)
    
#Main function
#empty array creation
array = []
#getting array size from user
length = int(input("Enter the size of array : "))
#loop to append the array items into array
for i in range (length):
    array_item = int(input(f"Enter the {i+1}th item in the array : "))
    array.append(array_item)
key = int(input("Enter the element to search : "))
low = 0
high = length - 1
#calling the function
pos = binary_search(array,key,low,high)
#printing the result
if pos>=0:
    print(f"The element is found in {pos}th position")
else:
    print("Element is not in the array")