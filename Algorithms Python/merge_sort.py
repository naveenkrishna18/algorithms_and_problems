def mergeSort(arr):
    if len(arr)>1:
        mid = len(arr)//2
        a = arr[:mid]
        b = arr[mid:]
        mergeSort(a)
        mergeSort(b)
        i=0
        j=0
        k=0

        while i < len(a) and j < len(b):
            if a[i] <= b[j]:
                arr[k] = a[i]
                i = i+1
            elif a[i] > b[j]:
                arr[k] = b[j]
                j = j+1
            k = k+1

        while i < len(a):
            arr[k] = a[i]
            i = i+1
            k = k+1
        
        while j < len(b):
            arr[k] = b[j]
            j = j+1 
            k=k+1


u = [8,3,6,1,4,2]
mergeSort(u)
print(u)