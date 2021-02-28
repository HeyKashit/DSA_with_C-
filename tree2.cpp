#include<iostream>
#include<vector> 
using namespace std;
class Treenode{
   public:
    int data;
    vector<Treenode*>children;
    // constructor
    Treenode(int data1)
    {
        this->data=data1;
    }
    
    
};

void print_tree(Treenode * root)
{
    cout<<root->data <<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print_tree(root->children[i]);
    }
    
}
int main()
{
    Treenode * root = new Treenode(10);
    Treenode * node1 = new Treenode(20);
    Treenode * node2 = new Treenode(30);
    
    // making connections in the tree.
  
    root->children.push_back(node1);
    root->children.push_back(node2);
    
    print_tree(root);
    
    return 0;
}
