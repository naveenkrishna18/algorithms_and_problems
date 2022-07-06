def binary_search(arr,l,h,value):
    mid = int((l+h)/2)
    if l == h:
        if arr[l] == value:
            return l
        else:
            return -1
    elif arr[mid] == value:
        return mid
    elif arr[mid] < value:
        return binary_search(arr,mid+1,h,value)
    else:
        return binary_search(arr,l,mid-1,value)




arr = [1,2,3,4,5,6,7,8,9]
l = 0
h = len(arr)-1


print(binary_search(arr,l,h,9))