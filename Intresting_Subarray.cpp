#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     ll n;
	     cin>>n;
	     ll arr[n];
	      ll mini=1e18;
	     for(int i=0;i<n;i++)
	         cin>>arr[i];
	         
	        ll mi=*min_element(arr,arr+n);
	        ll ma=*max_element(arr,arr+n);
	         if(mi<0 && ma<=0)
	         cout<<ma*ma<<" "<<mi*mi<<endl;
	         else if(mi<0 && ma>0)
	         cout<<mi*ma<<" "<<max(mi*mi,ma*ma)<<endl;
	         else
	          cout<<mi*mi<<" "<<ma*ma<<endl;
	 }
	return 0;
}
