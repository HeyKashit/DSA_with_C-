
//stack_using_linked_list....

#include<iostream>
using namespace  std;
class Node{
public:
    int data;
    Node*next;
    Node(int data)
    {
        data=data;
        next=NULL;
    }
};
class Stack{
private:
    Node*head;
    int size;
public:
    Stack()
    {
    head =NULL;
    size=0;
    }
    int getsize()
    {
        return  size;
    }
    bool is_empty()
    {
        return size==0;
    }
    void push(int data)
    {
        Node*n= new Node(data);
        n->next=head;
        head=n;
        size++;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"empty"<<endl;
            return;
        }
        else{
            Node*temp=head;
            head=head->next;
            delete temp;
            size--;
        }

    }
};

int main()
{
    Stack s1;
    s1.push(20);
    s1.push(40);
    cout<<s1.getsize();
}
