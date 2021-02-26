// reverse the linked list with the help of 3 pointers.
// current , previous and next pointer .



#include<iostream>
using namespace  std;
class Node{
public:
    int data;
    Node* next;
    // constructor
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void print(Node*head_ref)

{
    while(head_ref!=NULL)
    {
        cout<<head_ref->data<<" ";
        head_ref=head_ref->next;
    }
}
void reverse(Node*&head)
{
    Node*c=head;
    Node*p=NULL;
    Node*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        //update the current and the previous..
        p=c;
        c=n;
    }
    head=p;

}
int main()
{
    Node*n1=new Node(10);
    Node*n2= new Node(20);
    Node*n3 = new Node(30);
    Node*head=n1;
    n1->next=n2;
    n2->next=n3;
    print(head);
    reverse(head);
    cout<<endl;
    print(head);
    return 0;
}
