**************************************************************************************************************************************************************************
                                                        CREATING AND ADDING NEW NODE AT (HEAD,TAIL,MIDDLE)
**************************************************************************************************************************************************************************
#include <iostream>
using namespace std;

// making class...
class Node{
public:
    int data;
    Node*next;
    // making the constructor...
    Node(int new_data)
    {
        this->data=new_data;
        next=NULL;
    }
};

void print(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"-->";
        head=head->next;
    }
}
void insert_at_head(Node*&head,int data)
{
    Node*n=new Node(data);
    n->next=head;
    head=n;
}
void insert_at_tail(Node*&head,int data)
{
    Node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new Node(data);
}
void insert_at_middle(Node*&head,int data,int position)
{
    int jump=1;
    Node*current=head;
    while(jump<=position-1)
    {
        current=current->next;
        jump++;
    }
    Node*n=new Node(data);
    n->next=current->next;
    current->next=n;
}
int main()
{  /*
    Node*h1=new Node(10);
    Node*h2= new Node(20);
    Node*h3=new Node(3);
    Node*head=h1;
    h1->next=h2;
    h2->next=h3;
    print(head);
    */


    // adding the linked list by functions at head tail and middle.
    Node*head=NULL;
    insert_at_head(head,5);
    insert_at_head(head,2);
    insert_at_tail(head,50);
    insert_at_middle(head,100,1);
    print(head);

}
