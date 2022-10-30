#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(20);
    stack.push(25);
    stack.push(30);
    stack.push(40);
    stack.push(90);

    stack.pop();
    stack.pop();
    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}