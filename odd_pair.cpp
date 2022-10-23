#include <iostream>
using namespace std;

int main() {
// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int v = x+y;
        int p = y+z;
        if ((v&1 == 1) || (p&1 == 1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}