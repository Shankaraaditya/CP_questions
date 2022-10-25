#include <iostream>
#include <bits/stdc++.h>
long long int typedef ll;

using namespace std;
int main(){
    int t;
    cin>>t;
    ll n;ll a;
    do
    {
        cin>>n;
        a=n/2;
        n=n-a;
        cout<<n*a<<endl;
        



        t--;
    } while (t>0);
    
    return 0;
}