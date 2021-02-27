// Stack using array..

#include<iostream>
using namespace std;
class stack {
public:
    int *data;
    int netinde;
    int capacity;

    stack(int total) {
        data = new int[total];
        capacity = total;
        netinde = 0;
    }

    void push(int d) {
        if(netinde==capacity)
        {
            cout<<"OverFlow"<<endl;
        }

            data[netinde] = d;
            netinde++;

    }
    int sizee()
    {
        return netinde;
    }
    void pop()
    {
        if(netinde==0)
        {
            cout<<"UnderFlow"<<endl;
        }
        else{
            data[netinde]=0;
            netinde--;
        }
    }
    int top()
    {
        return data[netinde-1];
    }
    bool is_empty()
    {
        return netinde==0;
    }

};
int main()
{
    stack s1(10);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.sizee();

    return 0;
}
