#include<bits/stdc++.h>
using namespace std;

#define node ListNode;
ListNode* Solution::insertionSortList(ListNode* head) 
{
	node *i=head;
	int count = 1;
	while(i!=NULL)
	{
		node *j=head;
		int c=0;
		while(c<count)
		{
			if(i->val<=j->val)
			{
				node *temp=i;
				
			}
			else if(i->val>=j->val)
			j=j->next;
			c++;
		}
	}
}
