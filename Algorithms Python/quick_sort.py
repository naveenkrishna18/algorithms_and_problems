def partition(a,l,h):
    pivot = a[l]
    low = l+1
    high = h
    while True: 
        while low<=high and a[high]>=pivot:
            high = high - 1
        while low<=high and a[low]<=pivot:
            low = low + 1
        if low <= high:
            a[low],a[high] = a[high],a[low]
            print("iteration : "+ str(arr))
        else:
            break
    a[l],a[high] = a[high],a[l]
    print("iteration : "+ str(arr))
    return high

def quickSort(arr,l,h):
    if l<h:
        m = partition(arr,l,h)
        quickSort(arr,l,m-1)
        quickSort(arr,m+1,h)

#main function
arr = [56,32,74,96,39,10,45]
l = 0
h = len(arr)-1
print(arr)
quickSort(arr,l,h)
print(arr)