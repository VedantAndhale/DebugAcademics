#include <iostream>

// Function to swap two integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform heapify operation
void heapify(int arr[], int n, int i) {
    int largest = i;     // Initialize largest as root
    int left = 2 * i + 1;    // Left child
    int right = 2 * i + 2;   // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Function to build a max heap
void buildMaxHeap(int arr[], int n) {
    // Index of last non-leaf node
    int lastNonLeafNode = (n / 2) - 1;

    // Perform reverse level order traversal from the last non-leaf node and heapify each node
    for (int i = lastNonLeafNode; i >= 0; i--)
        heapify(arr, n, i);
}

// Function to find maximum and minimum marks using heap
void findMinMaxMarks(int marks[], int n, int& maxMarks, int& minMarks) {
    buildMaxHeap(marks, n);

    maxMarks = marks[0]; // Maximum marks will be at the root of the heap

    // Move the maximum element to the end of the array
    swap(marks[0], marks[n - 1]);

    // Heapify the reduced heap to get the minimum marks
    heapify(marks, n - 1, 0);

    if (maxMarks == marks[n - 1]) {
        // If minimum marks are the same as maximum marks,
        // we need to search for a different minimum within the remaining elements
        minMarks = marks[n - 2];
        for (int i = n - 3; i >= 0; i--) {
            if (marks[i] < minMarks) {
                minMarks = marks[i];
            }
        }
    } else {
        minMarks = marks[n - 1]; // Minimum marks will be the last element
    }
}

int main() {
    int marks[100];

    // Read marks obtained by students
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::cout << "Enter marks obtained by students: " << std::endl;
    for (int i = 0; i < numStudents; i++) {
        std::cin >> marks[i];
    }

    // Find maximum and minimum marks
    int maxMarks, minMarks;
    findMinMaxMarks(marks, numStudents, maxMarks, minMarks);

    // Output the results
    std::cout << "Maximum marks obtained: " << maxMarks << std::endl;
    std::cout << "Minimum marks obtained: " << minMarks << std::endl;

    return 0;
}
