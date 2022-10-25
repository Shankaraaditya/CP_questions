#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n,a,b;
   
    int x;
    int y;
     int sum = 0;
  
    do
    {
        cin>>n>>a>>b;
        vector<int> v;
        
         x = min(a,b);
         y = max(a,b);
        for (int i = 0; i < n-1; i++)
        {
            sum=sum+x;
            // cout<<i<<endl;
        } 
        v.push_back(sum);
        // v[0]=sum;
        // cout<<v[0]<<endl;
        for (int i = 0; i < n-1; i++)
        {
            sum=v[i]+y-x;
            // v.push_back
            v.push_back(sum);

        }

        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
            v[i]=0;

        }
        
        cout<<endl;
        // v.empty();
        
        

        sum=0;


        t--;
    } while (t>0);
    
    return 0;
}