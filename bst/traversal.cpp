#include<iostream>
#include<queue>
using namespace std;
#define node Node
struct Node {
	char data;
	Node *left;
	Node *right;
};

// Function to print Nodes in a binary tree in Level order
void LevelOrder(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);  
	//while there is at least one discovered node
	while(!Q.empty()) {
		Node* current = Q.front();
		Q.pop(); // removing the element at front
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}
node* postOrder(node *root)
{
	if(root->left==NULL and root->right==NULL)
	{
		cout<<root->data<<endl;
		return root;
	}

	if(root->left!=NULL)
		root->left=inOrder(root->left);
	if(root->right!=NULL)
		root->right=inOrder(root->right);

	cout<<root->data<<endl;
	return root;

}
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) 
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z'); 
	root = Insert(root,'A'); root = Insert(root,'E');
	root = Insert(root,'K'); root = Insert(root,'T');
	root = Insert(root,'D'); 
	//Print Nodes in Level Order. 
	// LevelOrder(root);
	root=postOrder(root);
}