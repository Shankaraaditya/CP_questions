#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    // int n;
    cin>>t;
    long long int x,y,n;
    do
    {
       cin>>x>>y>>n;
       if (x == y)
       {
        cout<<"0"<<endl;
       }
       else
       {
        long long int z = x xor y;
        if (z<n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if (log(z)==log(n))
            {
                if (n & (n-1))
                {
                    cout<<"2"<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
                
            }
            else
            {
                cout<<"-1"<<endl;
            }
            
            
        }
        
       }
       
        

        t--;
    } while (t>0);
    
    return 0;
}