class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [0] * self.size
        self.elementCount = 0
        self.comparisons = 0

    def isFull(self):
        return self.elementCount == self.size

    def hashFunction(self, element):
        return element % self.size

    def linearProbing(self, element, position):
        while self.table[position] != 0:
            position = (position + 1) % self.size
        return position

    def quadraticProbing(self, element, position):
        limit = 50
        i = 1
        while i <= limit:
            newPosition = (position + i**2) % self.size
            if self.table[newPosition] == 0:
                return newPosition
            i += 1
        return -1

    def insert(self, element):
        if self.isFull():
            print("Hash Table Full")
            return False

        position = self.hashFunction(element)
        if self.table[position] == 0:
            self.table[position] = element
            self.elementCount += 1
        else:
            newPosition = self.linearProbing(element, position)
            if newPosition == -1:
                newPosition = self.quadraticProbing(element, position)
            if newPosition != -1:
                self.table[newPosition] = element
                self.elementCount += 1

    def search(self, element):
        position = self.hashFunction(element)
        self.comparisons += 1

        if self.table[position] == element:
            return position

        temp = position
        position = (position + 1) % self.size
        while position != temp:
            self.comparisons += 1
            if self.table[position] == element:
                return position
            position = (position + 1) % self.size

        return -1

    def remove(self, element):
        position = self.search(element)
        if position != -1:
            self.table[position] = 0
            self.elementCount -= 1
        else:
            print("Element is not present in the Hash Table")

    def display(self):
        print("\nHash Table:")
        for i in range(self.size):
            if self.table[i] != 0:
                print("Position", i, ":", self.table[i])
        print("Number of elements in the table:", self.elementCount)


tableSize = int(input("Enter the size of the hash table: "))
elementsList = list(map(int, input("Enter the elements for the hash table: ").split()))

linearTable = HashTable(tableSize)
quadraticTable = HashTable(tableSize)

for element in elementsList:
    linearTable.insert(element)
    quadraticTable.insert(element)

print("Linear Probing:")
linearTable.display()
print("\nQuadratic Probing:")
quadraticTable.display()

numbers = [12, 26, 31, 17, 90, 28, 88, 40, 77]
print("\nSearch Results:")
for number in numbers:
    linearPosition = linearTable.search(number)
    quadraticPosition = quadraticTable.search(number)
    print("Number:", number)
    print("Linear Probing Position:", linearPosition)
    print("Quadratic Probing Position:", quadraticPosition)
    print()

print("Total number of comparisons for Linear Probing:", linearTable.comparisons)
print("Total number of comparisons for Quadratic Probing:", quadraticTable.comparisons)
