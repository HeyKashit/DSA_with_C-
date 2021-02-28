#include<iostream>
#include<queue> 
using namespace std;
int main()
{
    queue<int> q;
    
    // to push the element 
    
    q.push(10);
    q.push(20);
    q.push(30);
    
    // to pop out the element 
    
    q.pop();
    
    // to get the top element
    
    cout<<q.front()<<endl;
    
    // to get the back element
    
    cout<<q.back()<<endl;
    
    
    // to get the size
    
    return 0;
}
