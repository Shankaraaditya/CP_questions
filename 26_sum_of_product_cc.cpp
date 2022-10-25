#include <iostream>
#include <bits/stdc++.h>

long long int typedef ll;

using namespace std;
int main(){
    int t;
    cin>>t;
    ll n;
    ll count=0;
    ll ans=0;
    do
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
           if (arr[i]==0)
           {
            count=0;
           }
           else
           {
            count++;
           }
           ans=ans+count;
           
           
        }
        
        cout<<ans<<endl;

        count=0;
        ans=0;

        t--;
    } while (t>0);
    
    return 0;
}