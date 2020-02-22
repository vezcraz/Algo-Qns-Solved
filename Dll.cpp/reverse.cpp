#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	node *next, *prev;

	node(int x)
	{
		data = x;
		next=NULL;
		prev= NULL;
	}
};
node * insertAtEnd(node *head, int val)
{
	node *x = new node(val);
	if(head==NULL)
	{
		head = x;
		return head;
	}
	node *temp  = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next = x;
	x->prev= temp;
	return head;
}
void display(node *head)
{
	node *temp = head;
	while(temp!=NULL)
	{
		cerr<<temp->data<<" ";
		temp=temp->next;

	}
	cout<<"\n.....\n";
}
node *reverse(node *head)
{
	if(head->next==NULL)
		return head;
	node *newHead=reverse(head->next);
	newHead->prev=NULL;
	head->next->next=head;
	head->prev = head->next;
	head->next  = NULL;
	return newHead;

}
#define print display(head)
int main()
{
	node *head = NULL;
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		head=insertAtEnd(head,x);
	}
	print;
	head=reverse(head);
	print;

}