#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int count=0;

    do
    {
        cin>>n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {
                v.push_back(a[i]);
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i]%2 != 0 )
            {
                v.push_back(a[i]);
            }
            
        }

        for (int i = 0; i < n; i++)
        {
           if (v[i]%2==0)
           {
             count=count+(n-1-i);
           }
           else
           {
            for (int j = i+1; j < n; j++)
            {
                if (__gcd(v[i],2*v[j])>1)
                {
                    count++;
                }
                
            }
            
           }
           
           
            
        }

        cout<<count<<endl;


        count=0;
        


        
        
        t--;
    } while (t>0);
    
    return 0;
}