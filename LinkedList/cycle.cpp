#include<bits/stdc++.h>
using namespace std;

#define node ListNode;

ListNode* detectCycle(ListNode* head) 
{
	node *slow=head;
	node *fast = head;

	while(slow!=fast)
	{
		slow=slow->next;
		fast=fast->next->next;

	}
	node *slow=head;

	while(slow!=fast)
	{
		slow=slow->next;
		fast=fast->next;
	}
	
}
