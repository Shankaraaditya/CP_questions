#include <iostream>
#include <bits/stdc++.h>


typedef long long int ll;

using namespace std;
int main(){
    ll t;
    cin>>t;
    ll n;
    string e,g;
    ll ans=0;

    do
    {
        cin>>n;
        int mark[n] ={0};
     
        cin>>e>>g;
        for (ll i = 0; i < n; i++)
        {
            if (g[i]=='0') {
                continue;
            }
        
            if (g[i]=='1' && e[i]=='0')  {
                ans++;
            }
            else
            {
                if (i-1>=0 && e[i-1]=='1' && mark[i-1]==0)
                {
                    ans++;
                    mark[i-1]=1;
                }
                
                
                else if (i+1 < n && e[i+1]=='1' && mark[i+1]==0)
               
                {
                    ans++;
                    mark[i+1]=1;
                }
                
            }
       
        }

        cout<<ans<<endl;
        ans=0;
        t--;
    } while (t>0);
    
    return 0;
}