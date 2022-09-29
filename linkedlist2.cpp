#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Deleting node at given position 
void deleteNode(Node **head_ref ,int position){
    if(*head_ref == NULL)
    return;

    Node *temp = *head_ref;


    if(position == 0){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for(int i = 0;temp!=NULL && i<position-1;i++){
        temp = temp->next;

    }
    Node *next = temp->next->next;

    free(temp->next);
    temp->next = next;

    
}

// Deleting the first occurance of a given data
void deleteNode(Node **head_ref, int key)
{
    // Store head node as we have tranverse the list
    Node* temp = *head_ref, *prev;
    cout<<"Deleting the respective key"<<endl;

    if (temp != NULL && key == temp->data)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}

// // Recursively tranversing the list
// void transverse(Node *head)
// {
//     if (head == NULL)
//         return;

//     cout << "Tranversing by Recursive :" << endl
//          << head->data << endl;
//     transverse(head->next);
// }

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    // transverse(head);
    deleteNode(&head, 2);
    printList(head);

    return 0;
}