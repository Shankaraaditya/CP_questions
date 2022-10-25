#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a, b, c;
    do
    {
        cin>>a>>b>>c;
        int sum=a+b+c;
        if (a==b && sum-2*a == c && c%2==0) cout<<"YES"<<endl;

        else if (b==c && sum-2*b == a `&& a%2==0) cout<<"YES"<<endl;

        else if (c==a && sum-2*a == b && b%2==0) cout<<"YES"<<endl;

        else if(a+b==c || b+c == a || c+a ==b) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
        
        
        t--;
    } while (t>0);
    
    return 0;
}