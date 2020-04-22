#define key data
#define Node node
#include<bits/stdc++.h>
using namespace std;
#define TreeNode node
#define val data
struct node
{
	int data;
	node *left;
	node *right;
	int height;
	node(int d)
	{
		left=NULL;
		right=NULL;
		height=0;
		data=d;
	}
};
#include "PrintTree.h"

node* rol(node *root)
{
	node *temp=root->right;
	root->right=temp->left;
	temp->left=root;
	root->height=height(root);
	temp->height=height(temp);
	return temp; //returned the new root;
}
node* ror(node *root)
{
	node *temp=root->left;
	root->left=temp->right;
	temp->right=root;
	root->height=height(root);
	temp->height=height(temp);
	return temp; //returned the new root;
}
node* insert(node *root, int val)
{
	if(root==NULL)
	{
		node *temp=new node(val);
		return temp;
	}
	if(val<root->data)
		root->left=insert(root->left,val);
	else if(val>root->data)
		root->right=insert(root->right,val);
	else
		return root;
	root->height=height(root);
	int balance=0;
	if(!root->left)
		balance+=-1;
	else
		balance+=root->left->height;
	if(!root->right)
		balance-=-1;
	else
		balance-=root->right->height;
	

	//rebalance if became unbalanced

	if(balance<-1 and val>root->right->data)
		root=rol(root);
	else if(balance>1 and val<root->left->data)
		root=ror(root);
	else if(balance<-1 and val<root->right->data)
	{
		root->right=ror(root->right);
		root=rol(root);
	}
	else if(balance>1 and val>root->left->data)
	{
		root->left=rol(root->left);
		root=ror(root);
	}
	return root;

}

    int findMin(node *root)
    {
        if(root->left==NULL )
            return root->val;
        int x=findMin(root->left);
        return x;
    }

    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root==NULL)
            return root;
        if(key<root->data)
           root->left=deleteNode(root->left,key);
        else if(key>root->data)
            root->right=deleteNode(root->right,key);
        else
        {
            if(root->right==NULL and root->left==NULL)
            {
                delete root;
                root=NULL;
            }
            else if(root->right==NULL)
            {
                cout<<1;
                node *temp=root->left;
                delete root;
                root=temp;
            }
            else if(root->left==NULL)
            {
                cout<<2;
                node *temp=root->right;
                delete root;
                root=temp;
            }
            else
            {
                root->val=findMin(root->right);
                root->right=deleteNode(root->right,root->val);
                
            }
            if(root==NULL)
            return root;

        }
        root->height=height(root);
		int balance=0;
		if(!root->left)
			balance+=-1;
		else
			balance+=root->left->height;
		if(!root->right)
			balance-=-1;
		else
			balance-=root->right->height;
		//rebalance if became unbalanced

		if(balance<-1 and val>root->right->data)
			root=rol(root);
		else if(balance>1 and val<root->left->data)
			root=ror(root);
		else if(balance<-1 and val<root->right->data)
		{
			root->right=ror(root->right);
			root=rol(root);
		}
		else if(balance>1 and val>root->left->data)
		{
			root->left=rol(root->left);
			root=ror(root);
		}

        return root;
    }
int main()
{
	#ifndef ONLINE_JUDGE 
        freopen("../input.txt", "r", stdin); 
        freopen("../output.txt", "w", stderr); 
        freopen("../output.txt", "a", stdout); 
    #endif 
        cout<<"start";
	Node *root = NULL;  
      
    for(int i=0; i<1000; i++)
    	root=insert(root,rand()%2000);
	root=deleteNode(root,20);
	root=deleteNode(root,25);
	printTree(root, NULL, false);
    return 0;  
}