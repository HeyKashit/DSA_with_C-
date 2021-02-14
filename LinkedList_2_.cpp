******************************************************************************************************************************************************************************


                                                DELETING NODE AT (TAIL,HEAD,MIDDLE)


******************************************************************************************************************************************************************************
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
void delete_at_head(Node*&head)
 {
    if(head==NULL)
    {
        return ;
    }
    else{
        Node*temp=head;
        head=head->next;
        delete temp;
    }
 }

void delete_at_tail(Node*&head)
{
    if(head==NULL)
    {
        return;
    }
    else{
        Node*last=head;
        Node*pre=NULL;
        while(last->next!=NULL)
        {
            pre=last;
            last=last->next;
        }
        delete last;
        pre->next=NULL;
    }
}
void delete_at_middle(Node*&head,int position)
{
    if(head==NULL)
    {
        return;
    }
    else{
        int jump=1;
        Node*last=head;
        Node*pre=NULL;
        while(jump<=position-1)
        {
            pre=last;
            last=last->next;
            jump++;
        }
        pre->next=last->next;
        delete last;
        return;
    }
}
int main()
{
    Node*h1=new Node(10);
    Node*h2= new Node(20);
    Node*h3=new Node(30);
    Node*h4=new Node(40);
    Node*h5=new Node(50);
    Node*h6=new Node(60);
    Node*head=h1;
    h1->next=h2;
    h2->next=h3;
    h3->next=h4;
    h4->next=h5;
    h5->next=h6;
    print(head);
  cout<<endl<<"now deleting the nodes that we have created in the linked list"<<endl;
   delete_at_middle(head,3);
   delete_at_tail(head);
   delete_at_head(head);
   print(head);


}
