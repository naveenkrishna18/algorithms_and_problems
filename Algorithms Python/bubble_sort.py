a = [8,3,6,1,4]
l = len(a)

for i in range(0,l):
    for j in range(0,l-i-1):
        if a[j] > a[j+1]:
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp

print(a)
            