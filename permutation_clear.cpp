#include <bits/stdc++.h>
using namespace std;

void solve()
{
       int n,k;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<int> b(k);
    for (int i=0;i<k;i++)
    {
    cin>>b[i];
    }
    map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[b[i]]++;
        
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(!mp.count(a[i])){
            v.push_back(a[i]);
            
        }
        
    }
    for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
       cout<<endl;
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