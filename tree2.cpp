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





// big tree.

#include<iostream>
#include<vector> 
using namespace std;
class Treenode{
    public:
    int data;
    vector<Treenode*> children;
    // making constructor for the data entery;
    Treenode(int d)
    {
        this->data=d;
    }
};

void print_tree_node(Treenode*root)
{
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print_tree_node(root->children[i]);
    }
}

int main()
{
    Treenode * root  = new Treenode(10);
    Treenode * node1 = new Treenode(20);
    Treenode * node2 = new Treenode(30);
    Treenode * node3 = new Treenode(40);
    Treenode * node4 = new Treenode(50);
    Treenode * node5 = new Treenode(60);
    
    root->children.push_back(node1);
    root->children.push_back(node2);
    root->children.push_back(node3);
    
    node1->children.push_back(node4);
    node1->children.push_back(node5);
    
    print_tree_node(root);
    
}
