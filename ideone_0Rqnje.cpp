/*

THIS WONT BE ACCEPTED
STOP_GIVING_UP



*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a,b,c,d,e,x,y,f,g=0;
    vector<int>v;
    vector<int>u;
    cin>>a>>b>>x>>y;
    for(int i=0;i<a;i++)
    {
        cin>>e;
        v.push_back(e);
    }
sort(v.begin(),v.end());
    
      for(int i=0;i<a;i++)
    {
        
    cin>>f;
        u.push_back(f);
    }
sort(u.begin(),u.end(),greater<int>());
   
    for(int i =0;i<y;i++)
    {
    
    if(v[x-1]<u[i])
        {
        g++;
    }
}
    
    
    
    
     if(g==y)
    {
        cout<<"YES"<<endl;
        
    }
    else
    {
       cout<<"NO"<<endl; 
        
    }
}

