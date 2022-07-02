class Node(object):
    def __init__(self,value):
        self.value = value
        self.next = None

class stack(object):
    def __init__(self,head = None):
        self.head = head

    def push(self,new_node):
        if self.head:
            new_node.next = self.head
            self.head = new_node
        else:
            self.head = new_node
        
    def pop(self):
        current = self.head
        if current.next:
            self.head = current.next
        else:
            self.head = None

    def peek(self):
        return self.head.value

    
    def print_stack(self):
        current = self.head
        while current.next:
            print(current.value)
            current = current.next
        print(current.value)


# Main function
n1 = Node(10)
n2 = Node(20)
n3 = Node(16)
n4 = Node(49)
n5 = Node(45)
n6 = Node(96)
n7 = Node(28)
n8 = Node(694)

s = stack()
s.push(n1)
s.push(n2)
s.push(n3)
s.push(n4)
s.push(n5)
s.push(n6)
s.push(n7)
s.push(n8)

s.print_stack()
print("Head node : " + str(s.peek()))

s.pop()
s.pop()
s.pop()
s.pop()

print("after pop")
s.print_stack()
print("Head node : " + str(s.peek()))