# Assignment No-1A  Program to implement Hashing with Linear Probing
 
class hashTable:
    # initialize hash Table
    def __init__(self):
        self.size = int(input("Enter the Size of the hash table : "))
        # initialize table with all elements 0
        self.table = list(0 for i in range(self.size))
        self.elementCount = 0
        self.comparisons = 0
   
   
    # method that checks if the hash table is full or not
    def isFull(self):
        if self.elementCount == self.size:
            return True
        else:
            return False
   
   
    # method that returns position for a given element
    def hashFunction(self, element):
        return element % self.size
       
   
    # method that inserts element inside the hash table
    def insert(self, element):
        # checking if the table is full
        if self.isFull():
            print("Hash Table Full")
            return False
           
        isStored = False
       
        position = self.hashFunction(element)
       
        # checking if the position is empty
        if self.table[position] == 0:
            self.table[position] = element
            print("Element " + str(element) + " at position " + str(position))
            isStored = True
            self.elementCount += 1
       
        # collision occured hence we do linear probing
        else:
            print("Collision has occured for element " + str(element) + " at position " + str(position) + " finding new Position.")
            while self.table[position] != 0:
                position += 1
                if position >= self.size:
                    position = 0
           
            self.table[position] = element
            isStored = True
            self.elementCount += 1
        return isStored
       
 
    # method that searches for an element in the table
    # returns position of element if found
    # else returns False
    def search(self, element):
        found = False
       
        position = self.hashFunction(element)
        self.comparisons += 1
       
        if(self.table[position] == element):
            return position
            isFound = True
       
        # if element is not found at position returned hash function
        # then first we search element from position+1 to end
        # if not found then we search element from position-1 to 0
        else:
            temp = position - 1
            # check if the element is stored between position+1 to size
            while position < self.size:
                if self.table[position] != element:
                    position += 1
                    self.comparisons += 1
                else:  
                    return position
           
            # now checking if the element is stored between position-1 to 0
            position = temp
            while position >= 0:   
                if self.table[position] != element:
                    position -= 1
                    self.comparisons += 1
                else:  
                    return position
                   
        if not found:
            print("Element not found")
            return False
           
 
    # method to remove an element from the table       
    def remove(self, element):
        position = self.search(element)
        if position is not False:
            self.table[position] = 0
            print("Element " + str(element) + " is Deleted")
            self.elementCount -= 1
        else:
            print("Element is not present in the Hash Table")
        return
       
   
    # method to display the hash table
    def display(self):
        print("\n")
        for i in range(self.size):
            print(str(i) + " = " + str(self.table[i]))
        print("The number of element is the Table are : " + str(self.elementCount))
       
           
# main function
table1 = hashTable()
 
# storing elements in table
table1.insert(12)
table1.insert(26)
table1.insert(31)
table1.insert(17)
table1.insert(90)
table1.insert(28)
table1.insert(88)
table1.insert(40)
table1.insert(77)       # element that causes collision at position 0
 
# displaying the Table
table1.display()
print()
 
# printing position of elements
print("The position of element 31 is : " + str(table1.search(31)))
print("The position of element 28 is : " + str(table1.search(28)))
print("The position of element 90 is : " + str(table1.search(90)))
print("The position of element 77 is : " + str(table1.search(77)))
print("The position of element 1 is : " + str(table1.search(1)))
print("\nTotal number of comaprisons done for searching = " + str(table1.comparisons))
print()
 
table1.remove(90)
table1.remove(12)
 
table1.display()
