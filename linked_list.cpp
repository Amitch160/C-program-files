#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

void append(struct node **head_ref, int new_data)
{
    /*allocation of new node*/

    node *new_node = new node;

    struct node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;



    if (*head_ref == NULL)
    {
        *head_ref = new_node;

        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void insertafter(struct node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node cannot be null");
        return;
    }
    node *new_node = new node;

    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void push(struct node **head_ref, int new_data)

{
    // allocatin of new node
    struct node *new_node = new node;

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printlist(node *Node)
{
    while (Node != NULL)
    {
        cout << Node->data << endl;
        Node = Node->next;
    }
}

int main()
{
    // creating pointer for dynamic memory allocation
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // allocation of memory in heap through dynamic memory allocation

    head = new node;
    second = new node;
    third = new node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // cout<< third->next;

    push(&head, 5);
    insertafter(second, 10);
    append(&head, 20);

    printlist(head);

    return 0;
}
