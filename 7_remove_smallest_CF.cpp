#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int flag=0;
    do
    {
        cin>>n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        if (n==1)
        {
        cout<<"YES"<<endl;
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                if (a[i+1]-a[i]>1)
                {
                    flag=1;
                    break;
                }
                
            }
            
            if (flag==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
             
           
        }
        
        
        flag=0;


        t--;
    } while (t>0);
    
    return 0;
}