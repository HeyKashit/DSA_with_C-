#include<iostream>
#include<stack> 
using namespace std;
int main()
{
    stack<int> s;
    // to push the element 
    s.push(20);
    s.push(30);
    
    // to get top element
    cout<<s.top()<<endl;
    
    // to pop out top element
    s.pop();
    
    // to get size of the stack.
    
    cout<<s.size()<<endl;
    
    // to check for the empty stack.
    cout<<s.empty()<<endl;
}
