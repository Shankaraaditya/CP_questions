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
        string s,a;
        // string a;
        cin>>s;
        cin>>a;
        for (int i = 0; i < n; i++)
        {
            if (s[i]==a[i] || s[i]=='B' && a[i]=='G' || s[i]=='G' && a[i]=='B')
            {
                flag++;
            }
            // else
            // {
            //     cout<<"NO"<<endl;
            // }
           
        }

        if (flag==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        flag=0;


        t--;

    } while (t>0);
    
    return 0;
}