#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y;
    int xf,yf;
    do
    {
        cin>>x>>y;

        if (x%10==0)
        {
            xf=x/10;
        }
        else
        {
            xf=x/10+1;
        }

         if (y%10==0)
        {
            yf=y/10;
        }
        else
        {
            yf=y/10+1;
        }

        cout<<abs(xf-yf)<<endl;

        
        



        t--;
    } while (t>0);
    
    return 0;
}