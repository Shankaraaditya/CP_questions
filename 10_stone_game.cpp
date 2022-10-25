#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int p,ans;
    int pmax,pmin;
    do
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        pmax = max_element( a+1 , a+n+1) - a ;
        pmin = min_element(a+1 , a+n+1) - a ; 

        int left = max(pmax , pmin);
        int right = max((n-pmax) , (n-pmin) ) + 1;
        
        int both = min( pmax , pmin ) + n - max(pmin , pmax) + 1;

        int ans = min(both , min(left , right)); 

        cout<<ans<<endl;

        

       

        
        
        
       
        // ma=0,mi=0;


        // cout<<ma<<" "<<maI<<" "<<mi<<" "<<miI<<endl;


        t--;
    } while (t>0);
    
    return 0;
}