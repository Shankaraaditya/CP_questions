#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a[3];
    int count=0;
    int ans=0;
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
            if (a[i]==1)
            {
                count++;
            }
            
        }

        if (count>=2)
        {
            ans++;
        }
        
        
        count=0;


        t--;
    } while (t>0);

    cout<<ans<<endl;
    
    return 0;
}