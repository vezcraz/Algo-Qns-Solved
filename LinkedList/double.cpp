// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *curr;
    for (curr = head; curr->next != NULL; curr = curr->next)
        ;
    Node *temp = new Node(x);
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void printList(Node *head)
{
    // The purpose of below two loops is
    // to test the created DLL
    Node *temp = head;
    if (temp != NULL)
    {

        while (temp->next != NULL)
            temp = temp->next;
        while (temp->prev != NULL)
            temp = temp->prev;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    cout << endl;
}
#define node Node
void addNode(Node *head, int pos, int data)
{
    // Your code here
    node *x = new node(data);
    node *temp = head;
    int count = 0;

    while(temp->next != NULL and count < pos)
    {
        temp = temp->next;
        count++;
    }
    x->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = x;
    temp->next = x;
    x->prev = temp;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        Node *head = NULL;
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            head = insert(head, x);
        }
        int pos, data;
        cin >> pos >> data;
        addNode(head, pos, data);
        printList(head);
    }
    return 0;
}// } Driver Code Ends
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

/* Function to insert into a Doubly Linked List */
