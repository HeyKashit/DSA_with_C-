#include<iostream>
#include<vector>
using namespace  std;
class TreeNode{
public:
    int data;
    vector<TreeNode*>children;
    TreeNode(int d)
    {
        this->data=d;
    }
};

void printTreeNode(TreeNode*root)
{
    cout<<root->data<<endl;
    for(int i=0;i< root->children.size();i++)
    {
        printTreeNode(root->children[i]);
    }
}


int main()
{
    TreeNode*root= new TreeNode(10);
    TreeNode*node1= new TreeNode(20);
    TreeNode*node2= new TreeNode(30);
    TreeNode*node3= new TreeNode(40);
    root->children.push_back(node1);
    root->children.push_back(node2);
    root->children.push_back(node3);
   printTreeNode(root);

}
