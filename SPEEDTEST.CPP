#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t-->0)
	 {
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if((a/b)>(x/y))
	    cout<<"Alice"<<endl;
	    else if((x/y)>(a/b))
	    cout<<"Bob"<<endl;
	    else if((x/y)==(a/b))
	    cout<<"EQUAL"<<endl;
	 }
	return 0;
}
