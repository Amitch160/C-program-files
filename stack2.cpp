#include <bits/stdc++.h>

using namespace std;

// A structure to represent a stack
struct StackNode
{
    int data;
    struct StackNode *next;
};

// Utility Function to create a new stack Node
struct StackNode *newNode(int data)
{
    struct StackNode *stackNode = new StackNode;
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Function to check if stack is empty

int isEmpty(struct StackNode *root)
{
    return !root;
}

// Function to push new element onto stack

void push(struct StackNode **root, int data)
{
    struct StackNode *stackNode = newNode(data);

    stackNode->next = *root;
    *root = stackNode;

    cout << data << " pushed to stack\n";
}

// Function to pop element from stack

int pop(struct StackNode **root)
{
    if (isEmpty(*root))
        return INT_MIN;

    struct StackNode *temp = *root;
    *root = (*root)->next;

    int popped = temp->data;
    free(temp);

    return popped;
}
// Function to get the element present at top of stack

int peek(struct StackNode *root)
{
    if (isEmpty(root))
        return INT_MIN;

    return root->data;
}

int main()
{
    struct StackNode *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << "popped from stack " << pop(&root) << endl;

    cout << "popped from stack " << peek(root) << endl;

    return 0;
}