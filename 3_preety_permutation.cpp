#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int temp;
    do
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i]=i+1;
        }
        
        if (n%2==0)
        {
            for (int i = 0; i < n; i=i+2)
            {
                swap(a[i],a[i+1]);
                
            }
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            
            
        }
        else
        {
          cout<<"3 "<<"1 "<<"2 ";
          for (int i = 3; i < n; i=i+2)
          {
            swap(a[i],a[i+1]);
          }
          
          for (int i = 3; i < n; i++)
          {
            cout<<a[i]<<" ";
          }
          
            
            
        }
        
        cout<<endl;



        t--;
    } while (t>0);
    
    return 0;
}