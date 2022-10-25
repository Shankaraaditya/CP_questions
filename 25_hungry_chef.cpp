#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
   long long int a,b,n,ans=1,i=0;
    do
    {
        cin>>a>>b>>n;
        if (a%b==0)
        {
            cout<<"-1"<<endl;
        }
        else if (n%a==0 && n%b!=0)
        {
            cout<<n<<endl;
        }
        else
        {
            i=n/a+1 ;
            ans=n ;
            do
            {
                ans=i*a;
                i++;
                // if (ans>=n)
                // {
                //     break;
                // }
                
            } while (!(ans%a==0 && ans%b!=0));

            cout<<ans<<endl;
            
        }
        

        
        
        


        t--;
    } while (t>0);
    

    return 0;
}