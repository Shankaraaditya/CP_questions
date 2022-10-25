#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int m;
    int n;
    int flag=0;
    do
    {
        cin>>m;
        cin>>n;
        int arr[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        
    for (int i=1; i<=n; i++) {
       for (int j=i+1; j<n; j++) {
          if (arr[i]+arr[j]==m) {

             cout<<i<<" "<<j<<endl;
             flag=1;
             break;
          }
       }
       
          if (flag==1)
          {
            break;
            
          }
          
          
       }
      
       
    
        
        flag=0;

        t--;
    } while (t>0);
    
    return 0;
}