
/*
START BY THE NAME OF ALMIGHTY ALLAH
THIS WONT BE ACCEPTED
STOP_GIVING_UP
*/
#include<bits/stdc++.h>
#define l(i,a,n)for(int i=a;i<n;i++)
#define pb push_back
#define in insert
#define mp make_pair
#define lw(v) sort(v.begin(),v.end());
#define hi(v) sort(v.begin(),v.end(),greater<long long>());
#define all(v) v.begin(),v.end()
using namespace std;
const int mx =1e5+123;
//long long adjmat[mx][mx];
//long long adjmat[mx][mx];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,r=1,r1=0,r2=0,k=0,a,b,c=1,m,d=0,n,e,f,x=0,g,p=0,q=0,y=0,z=0;
    vector<long long>adjmat[mx];
    vector<long long>u;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s1,s2,s3,s4;
    cin>>n>>m;
    l(i,1,m+1)
    {
        cin>>a>>b;
        adjmat[a].pb(b);
    

    }
    cout<<endl<<endl;
    l(i,1,n+1){
    
    for(auto x:adjmat[i])
    {
        cout<<x<<"  ";
    }
    cout<<endl;
    }
}
