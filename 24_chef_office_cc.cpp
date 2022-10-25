#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y,n,a,b;
   long long int r;
    do
    {
        cin>>x>>y>>n>>r;

          if (r/y>=n)
      {
        cout<<"0"<<" "<<n<<endl;
      }
      else if (r/x<n)
      {
        cout<<"-1"<<endl;
}
      
         else
        {
        int p =(r-(n*y))/(x-y);
            // a=n-b;
        if ((r-(n*y))%(x-y)!=0)  p=p+1;                              
                      

cout<<p<<" "<<n-p<<endl;
        }
  
        t--;
    } while (t>0);
    
    return 0;
}