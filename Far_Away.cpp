#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     ll n,m;
	     
	     cin>>n>>m;
	     ll ar[n+10];
	     for(int i=0;i<n;i++)
	         cin>>ar[i];
	    
	     ll ans=0;
	      for(int i=0;i<n;i++)
	      {
	          ans=ans+max(abs(ar[i]-1),abs(ar[i]-m));
	      }
	      cout<<ans<<endl;
	 }
	return 0;
}
