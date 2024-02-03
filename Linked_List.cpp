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


int main()
{
    // Create a Class Objects
    Node *node1 = new Node(10); // Values Given in 10
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}
