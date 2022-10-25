#include <iostream>
#include <bits/stdc++.h>

long long int typedef ll;

using namespace std;
int main(){
    int t;
    cin>>t;

    ll a,b;
   
    do
    {
        cin>>a>>b;
        if (a>b)
        {
            swap(a,b);
        }

        ll ans = b-a;

        if (ans==0)
        {
            cout<<"0"<<" "<<"0"<<endl;
        }
        else
        {
            ll x = ans - a%ans;
            ll y = a%ans;

             cout<<ans<<" "<<min(x,y)<<endl;
        }


       
        
        


        
       







       t--;

    } while (t>0);
    
    return 0;
}