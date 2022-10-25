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

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
          
        }

       int mi= *min_element(a,a+n);
       for (int i = 0; i < n; i++)
       {
          if (a[i]==mi)
          {
            count++;
          }
          
       }
       cout<<n-count<<endl;
       count=0;
        
        t--;
       
    } while (t>0);
    
    return 0;
}