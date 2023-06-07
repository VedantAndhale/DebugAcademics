#include <iostream>

using namespace std;

class Node {
public:
    string name;
    Node* child;
    Node* sibling;

    Node(string nodeName) : name(nodeName), child(nullptr), sibling(nullptr) {}
};

void printNodes(Node* node) {
    if (node == nullptr)
        return;

    cout << node->name << endl;

    if (node->child != nullptr)
        printNodes(node->child);

    if (node->sibling != nullptr)
        printNodes(node->sibling);
}

int main() {
    Node* book = new Node("Book");

    // Creating chapters
    Node* chapter1 = new Node("Chapter 1");
    Node* chapter2 = new Node("Chapter 2");
    Node* chapter3 = new Node("Chapter 3");

    // Creating sections in Chapter 1
    Node* section1_1 = new Node("Section 1.1");
    Node* section1_2 = new Node("Section 1.2");
    Node* section1_3 = new Node("Section 1.3");

    // Creating subsections in Section 1.1
    Node* subsection1_1_1 = new Node("Subsection 1.1.1");
    Node* subsection1_1_2 = new Node("Subsection 1.1.2");

    // Creating subsections in Section 1.2
    Node* subsection1_2_1 = new Node("Subsection 1.2.1");
    Node* subsection1_2_2 = new Node("Subsection 1.2.2");

    // Linking nodes
    chapter1->child = section1_1;
    section1_1->sibling = section1_2;
    section1_2->sibling = section1_3;
    section1_1->child = subsection1_1_1;
    subsection1_1_1->sibling = subsection1_1_2;
    section1_2->child = subsection1_2_1;
    subsection1_2_1->sibling = subsection1_2_2;

    book->child = chapter1;
    chapter1->sibling = chapter2;
    chapter2->sibling = chapter3;

    // Printing all nodes
    cout << "Nodes in the book:" << endl;
    printNodes(book);

    // Deallocating memory
    delete book;
    delete chapter1;
    delete chapter2;
    delete chapter3;
    delete section1_1;
    delete section1_2;
    delete section1_3;
    delete subsection1_1_1;
    delete subsection1_1_2;
    delete subsection1_2_1;
    delete subsection1_2_2;

    return 0;
}
