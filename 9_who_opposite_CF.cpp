#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    do
    {
        cin>>a>>b>>c;
        int x= min(a,b);
        int y= max(a,b);
        int z=max(y,c);

        int n=(y-x)*2;
        int ans=c+n/2;

        if (x+1==y || n%2!=0 || c>n  ||z>n )
        {
            cout<<"-1"<<endl;
        }
        else if (ans>n)
        {
            cout<<ans-n<<endl;
        }
        
        else
        {
             cout<<ans<<endl;
        }
        
        

       


        t--;
    } while (t>0);
    
    return 0;
}