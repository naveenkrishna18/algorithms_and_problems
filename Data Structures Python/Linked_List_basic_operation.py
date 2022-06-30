class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None

class LinkedList(object):
    def __init__(self,head = None):
        self.head = head

    def append(self,new_node):
        current = self.head
        if self.head:
            while current.next:
                current = current.next
            current.next = new_node
        else:
            self.head = new_node
    
    def insert (self,new_node,pos):
        current = self.head
        if self.head:
            if pos == 1:
                new_node.next = current
                self.head = new_node
            else:
                for i in range (1,pos-1):
                    current = current.next
                new_node.next = current.next
                current.next = new_node
        else:
            append(new_node)


    def get_position(self,pos):
        current = self.head
        if current: 
            if pos == 1 :
                return current
            else:
                for i in range(1,pos):
                    current = current.next
            return current
    
    def print_list(self):
        current = self.head
        if self.head:   
            while current.next:
                print(str(current.value) + " -> " ,end="")
                current = current.next
            print(current.value)
        else:
            print("no element")
            return None

    def delete(self,value):
        current = self.head
        prev = self.head
        if current.value != value:
            while current.next:
                if current.value != value:
                    prev = current
                    current = current.next
                else:
                    prev.next = current.next
                    return "Delete Successful"
                   
            if current.value == value:
                prev.next = None
        else:
            self.head = current.next


#main function
n1 = Node(1)
n2 = Node(2)
n3 = Node(284)
s = LinkedList()
s.append(n1)
s.append(n2)
s.append(n3)


print(s.get_position(3).value)

n4 = Node(99)
s.insert(n4,3)

print(s.get_position(3).value)
print(s.get_position(4).value)

s.print_list()

n5 = Node(13)
s.insert(n5,2)

s.print_list()

s.delete(2)

s.print_list()