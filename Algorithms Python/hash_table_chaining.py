def hashing(ele):
    hash_value = ele%10
    return hash_value

def insert():
    key = int(input("enter key : "))
    hash_value = hashing(key)
    hash[hash_value].append(key)

def display(hash):
    for i in range(0,10):
        print(f"{i} -> " ,end="")
        print(f"{hash[i]}",end=" ")
        print("")

def search(hash):
    key = int(input("Enter the element to be searched : "))
    hash_val = hashing(key)
    flag = 1
    for i in range (len(hash[hash_val])):
        if key == hash[hash_val][i]:
            print(f"The element is found in bucket {hash_val} and position {i}")
            flag = 0
    if flag!=0:
        print("element not found")

def select():
    print("Select an option")
    print("1. Insert an element to the hash table")
    print("2. Display the hash table")
    print("3. Find an element in the hash table")
    option = int(input("enter option : "))
    if option < 4 and option > 0:
        while True:
            if option == 1:
                insert()
                break
            elif option == 2:
                display(hash)
                break
            elif option == 3:
                search(hash)
                break
        select()
    else:
        return

hash = [[],[],[],[],[],[],[],[],[],[]]
select()


