/* Singly Linked List C++ Example - All Operations Example Program Using Functions in C++*/
/* Data Structure C++ Programs,C++ Linked List Examples */
/* Singly Linked List C++ Example - Insert,Delete,Display and Count C++ Operations*/

#include <iostream>

#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node {
    int value;
    struct node *next;
};

void insert();
void display();
void delete_node();
int count();

typedef struct node DATA_NODE;

DATA_NODE *head_node, *first_node, *temp_node = 0, *prev_node, next_node;
int data;

int main() {
    int option = 0;

    cout << "Singly Linked List C++ Example - All Operations\n";

    while (option < 5) {

        cout<< "\nOptions\n";
        cout<< "1 : Add the members as well as president or even secretary. \n";
        cout<< "2 : Delete the members as well as president or even secretary. \n";
        cout<< "3 : Display members\n";
        cout<< "4 : Compute total number of members of club\n";
        
        cout<< "Others : Exit()\n";
        cout<< "Enter your option:";
        cin>>option;
        //scanf("%d", &option);
        switch (option) {
            case 1:
                insert();
                break;
            case 2:
                delete_node();
                break;
            case 3:
                display();
                break;
            case 4:
                count();
                break;
            default:
                break;
        }
    }

    return 0;
}

void insert() {
    cout << "\nEnter the member to be Inserted: \n";
    //scanf("%d", &data);
    cin>>data;
    temp_node = (DATA_NODE *) malloc(sizeof (DATA_NODE));

    temp_node->value = data;

    if (first_node == 0) {
        first_node = temp_node;
    } else {
        head_node->next = temp_node;
    }
    temp_node->next = 0;
    head_node = temp_node;
    fflush(stdin);
}

void delete_node() {
    int countvalue, pos, i = 0;
    countvalue = count();
    temp_node = first_node;
    cout << "\nDisplay Members : \n";

    cout << "\nEnter Position to Delete the member : \n";
    //scanf("%d", &pos);
    cin>>pos;
    if (pos > 0 && pos <= countvalue) {
        if (pos == 1) {
            temp_node = temp_node -> next;
            first_node = temp_node;
            cout << "\nMember Deleted Successfully \n\n";
        } else {
            while (temp_node != 0) {
                if (i == (pos - 1)) {
                    prev_node->next = temp_node->next;
                    if (i == (countvalue - 1)) {
                        head_node = prev_node;
                    }
                    cout << "\nMember Deleted Successfully \n\n";
                    break;
                } else {
                    i++;
                    prev_node = temp_node;
                    temp_node = temp_node -> next;
                }
            }
        }
    } else
        cout << "\nInvalid Position \n\n";
}

void display() {
    int count = 0;
    temp_node = first_node;
    cout << "\nDisplay Members : \n";
    while (temp_node != 0) {
        cout << "# " << temp_node->value;
        count++;
        temp_node = temp_node -> next;
    }
    cout << "\nCount of Members :" << count;
}

int count() {
    int count = 0;
    temp_node = first_node;
    while (temp_node != 0) {
        count++;
        temp_node = temp_node -> next;
    }
    cout << "\nCount of Members : " << count;
    return count;
}
