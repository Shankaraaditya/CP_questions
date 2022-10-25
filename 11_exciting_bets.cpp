#include <iostream>
#include <bits/stdc++.h>

long long int typedef ll;

using namespace std;
int main(){
    int t;
    cin>>t;
    long long int a,b;
    // ll steps;


    do
    {
        cin>>a>>b;
        ll x= __gcd(a,b);
        long long int ma= max(a,b);
        long long int mi= min(a,b);
        // long long int y=max(a,b);

        ll y= ma-mi;

        if (a==b)
        {
            cout<<"0"<<" "<<"0"<<endl;
        }
        else
        {
            if (x>y)
            {
                cout<<x<<" "<<"0"<<endl;
            }
            else
            {
                cout<<y<<" "<<mi<<endl;
            }
            
            
        }
        
        

     

        t--;
    } while (t>0);
    
    return 0;
}