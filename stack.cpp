#include <iostream>
using namespace std;

// stackUsingLinkedList_0054

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
private:
    Node *top;
};
