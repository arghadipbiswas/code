#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d,e,p,f,h;
	    d=max(a,b);
	    f=max(d,c);
	    e=min(a,b);
	    h=min(e,c);
	    p=f-h;
	    cout<<p<<endl;
	}
	return 0;
}
