#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int flag=0;
    int m,n;
    int a=0,b=0;
    int ans=0,ans2=0;
    int x=0,y=0;
    do
    {
        cin>>n>>m;

        for (int i = n; i <= m; i++)
        {
            a=i;
            b=m-(m%i);
           
           ans=abs(a-b);

            if (ans>ans2)
            {
               ans2=ans;
               x=a;
               y=b;
            }
            else
            {
                x=n;
                y=m;
            }
            
          
        }

        cout<<x<<" "<<y<<endl;
        
       
      
        t--;
    } while (t>0);
    
    return 0;
}