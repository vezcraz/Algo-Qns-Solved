#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *deleteEven(Node *head, Node *tail)
{
    Node *iter = head;
    while(iter->next != head)
    {

        if(iter->next->data % 2 == 0)
        {
            Node *temp = iter->next;
            iter->next = iter->next->next;
            delete temp;
            continue;
        }
        if(iter->next==head){
        	tail=iter;
        	continue;
        }
        iter = iter->next;
    }

    if(head->data % 2 == 0)
    {
        Node *temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
        if(head->next==head)
        {
        	head = NULL;
        	tail=NULL;
        }
    }
    return head;
}

void display(Node *head)
{
    Node *temp = head;
    if(head==NULL)
    {
        cout << "null";
        return;
    }
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    while(temp != head);
    cout << endl;
}

int main()
{

    Node *head = NULL, *tail = NULL;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Node *temp = new Node();
        temp->data = x;
        temp->next = NULL;

        if(!i)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    tail->next = head;
    display(head);
    head = deleteEven(head, tail);
    display(head);
}