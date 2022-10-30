#include<bits/stdc++.h>
using namespace std;
void view(queue<int> q)
{
    queue<int> queue=q;
    while(!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();
    }
}
int main()
{
    queue<int> queue;
    queue.push(20);
    queue.push(25);
    queue.push(30);
    queue.push(40);
    queue.push(90);

    queue.pop();
    queue.pop();
    view(queue);
}