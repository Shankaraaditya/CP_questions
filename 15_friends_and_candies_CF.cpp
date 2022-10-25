#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int avg;
    int sum=0;
    int count=0;

    do
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }

       if (sum%n !=0)
       {
        cout<<"-1"<<endl;
       }
       else
       {
        avg=sum/n;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>avg)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
        
       }
       
       count=0;
       sum=0;



        
        t--;
    } while (t>0);
    
    return 0;
}