#include <iostream>
#include <bits/stdc++.h>

long long int typedef ll;

using namespace std;
int main(){

    int t;
    ll n;
    cin>>t;
 
    do
    {
        cin>>n;
        while (n%2==0)
        {
            n=n/2;
        }

        if (n==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    
        
        t--;
    } while (t>0);
    
    
    return 0;
}