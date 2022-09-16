#include <bits/stdc++.h>
using namespace std;

void solve()
{
       int n,k;
    cin>>n;
    vector<int> v(n);
    map<int,int>mp;
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
     int count=0;
     for(auto it:mp)
     {
             count+=(it.second)*(it.second-1)/21;
         

     }
     cout<<count<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       solve();   
    }
    
	// your code goes here
	return 0;
}