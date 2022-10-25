#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    int x;

    do
    {
        cin>>a>>b>>c;
        // x=abs(a-b);
        x= __gcd(a,b);

        if (c%x==0 && c<=max(a,b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        





        t--;
    } while (t>0);
    
    return 0;
}