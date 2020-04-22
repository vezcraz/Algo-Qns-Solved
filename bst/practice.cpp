#include<bits/stdc++.h>
using namespace std;
#define data val
struct node {node *left; node *right; int val; node(int d) {left=NULL; right=NULL; val=d; } };
#include "PrintTree.h"
node* insert(int val, node *root) {if(root==NULL) {node* x= new node(val); return x; } if(val<=root->val) root->left=insert(val,root->left); else if(val>root->val) root->right=insert(val,root->right); return root; }

void levelOrder(node *root)
{
	if(root==NULL)
		return;
	queue<node*> v;
	v.push(root);
	while(!v.empty())
	{
		node *temp=v.front();
		v.pop();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
			v.push(temp->left);
		if(temp->right!=NULL)
			v.push(temp->right);
	}

}
node* postOrder(node *root)
{
	if(root->left==NULL and root->right==NULL)
	{
		cout<<root->data<<" ";
		return root;
	}

	if(root->left!=NULL)
		root->left=postOrder(root->left);
	if(root->right!=NULL)
		root->right=postOrder(root->right);
	cout<<root->data<<" ";

	return root;

}
int main()
{
	freopen("../input.txt", "r", stdin); 
	freopen("../output.txt", "w", stderr); 
	freopen("../output.txt", "a", stdout); 
	node *root= new node(10);

	vector<int> v={5,3,7,2,9,4,5,6,8};
	for(int x: v)
	{
		root=insert(x, root);
		// cout<<root->right->val;
	}
	cout<<height(root);
	printTree(root, NULL, false);
	levelOrder(root);
	cout<<endl;
	
	root=postOrder(root);


}