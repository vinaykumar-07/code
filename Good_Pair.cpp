#include<bits/stdc++.h>
#define ll long long

using namespace std;

void printarr(int ar[],int n)
{
	 for(int i=0;i<n;i++)
	 	for(int j=i+1;j<n;j++)
	    	cout<<"("<<ar[i]<<" ,"<<ar[j]<<")";
	    cout<<endl;
}
int gcd(int a, int b)
{
     
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b){
        return gcd(a-b, b);
    }
    return gcd(a,b-a);
}
int lcm(int a, int b)
{
	int m=max(a,b);
	for(int i=m;i>0;i++)
	{
		if(i%a==0 && i%b==0)
		{ 	return i;
		    break;
		}
	}
}


// Alternate sollution need optimization 



// int32_t main()
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// 	  int t;
// 	 cin>>t;
	
// 	 while(t--)
// 	 {
// 	     int n,a,b;
// 	     cin>>n;
// 	     int arr[100000];
// 	     for(int i=0;i<n;i++)
// 	     {
// 	     	cin>>arr[i];
// 	     }
// 	     // printarr(arr,n);
//            int c=0;
	    
// 	     for(int i=0;i<n;i++)
// 	     	{ 
// 	     		for(int j=i+1;j<n;j++)
// 	     			{
// 	     				a=lcm(arr[i],arr[j]);
// 	     			    b=gcd(arr[i],arr[j]);
// 	     			    if(a==b)
// 	     			    c++;
// 	     		    }
// 	      }
// 	      cout<<c<<endl;
//     }
// 	return 0;
// }
// well optimize sollution 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	  int t;
	 cin>>t;
	
	 while(t--)
	 {
	     int n;
	     cin>>n;
	     ll arr[n];
	     map<ll ,ll> mp;
	     for(int i=0;i<n;i++)
	     {
	         cin>>arr[i];
	         mp[arr[i]]++;
	     }
	     ll ans=0;
	     for(auto it : mp)
	     {
	         ans+=(it.second*(it.second-1))/2;
	     }
	      cout<<ans<<endl;
	  }
	     
	    
	return 0;
}

