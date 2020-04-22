
#define Node node
struct node;
int height(node *root)
{
    if(root == NULL) return -1;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}
struct Trunk
{
    Trunk *prev;
    string str;
    Trunk(Trunk *prev, string str)
    {
        this->prev = prev;
        this->str = str;
    }
};
void showTrunks(Trunk *p)
{
    if (p == nullptr) return;
    showTrunks(p->prev);
    cout << p->str;
}
void printTree(Node *root, Trunk *prev, bool isLeft)
{
    if (root == nullptr) return;
    string prev_str = "    ";
    Trunk *trunk = new Trunk(prev, prev_str);
    printTree(root->left, trunk, true);
    if (!prev) trunk->str = "---";
    else if (isLeft)
    {
        trunk->str = ".---";
        prev_str = "   |";
    }
    else
    {
        trunk->str = "`---";
        prev->str = prev_str;
    }
    showTrunks(trunk);
    cout << root->data << endl;
    if (prev) prev->str = prev_str;
    trunk->str = "   |";
    printTree(root->right, trunk, false);
}
