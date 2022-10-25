#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    // int ans=0;
    int start=0;
    int flag=0;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
       if (a[i]==0)
       {
         start=i;
         break;
       }
       
        
    }

    while(start<n)
    {
        if (a[start+2]==0)
        {
            start=start+2;
            flag++;
        }
        else
        {
            start++;
            flag++;
        }

        // if (start>=n)
        // {
        //     break;
        // }

    }

    cout<<flag-1<<endl;
    
    return 0;
}