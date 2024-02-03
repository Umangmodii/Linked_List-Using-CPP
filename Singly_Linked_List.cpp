// Singly Linked List Using CPP

// Node Create in Linked List

#include <iostream>

using namespace std;

// Create a class
class Node
{
public:
    int data;
    Node *next; // Address or Pointer Store

    // Create a Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// Insert Fuction
void insertAtHead(Node *&head, int data) // &head is Reference  of the head node so that any changes made will reflect to the actual head also.
{
    /* 1. Allocate node and put the data */
    Node *temp = new Node(data);
    /* 2. Make next of head as NULL so that it can be the first node */
    temp->next = head;
    head = temp;
}

void print(Node *&head) // Address of &head in Pointer
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

main()
{
    // Create a Class Objects
    Node *node1 = new Node(10); // Values Given in 10
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;

    return 0;
}
