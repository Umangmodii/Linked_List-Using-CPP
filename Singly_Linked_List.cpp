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

    // Descturctor
    ~Node()
    {
        int value = this->data;

        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "Memory is Free for data." << value << " .\n";
    }
};

// Insert Fuction
// Starting
void insertAtHead(Node *&head, int data) // &head is Reference  of the head node so that any changes made will reflect to the actual head also.
{
    /* 1. Allocate node and put the data */
    Node *temp = new Node(data);
    /* 2. Make next of head as NULL so that it can be the first node */
    temp->next = head;
    head = temp;
}

// Ending
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
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

void insertAtPosition(int position, int data, Node *head)
{
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Creating a new Node
    Node *nodetoInsert = new Node(data);

    nodetoInsert->next = temp->next;

    temp->next = nodetoInsert;
}

// Deletion Operations

void DeletionNode(int position, Node *&head)
{
    // Delete first or start node

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // Memory Free Space Node
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // Delete any middle node or last node

        Node *curr = head;
        Node *prev = NULL;

        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // Create a Class Objects
    Node *node1 = new Node(10); // Values Given in 10
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    print(head);

    // Values And Function Passed
    insertAtTail(tail, 15);
    print(head);
    // insertAtTail(tail, 15)

    // Insert Middle Position
    insertAtPosition(3, 22, head);

    // Function Used Copy Pointer Address
    print(head);

    DeletionNode(3, head);
    print(head);

    return 0;
}
