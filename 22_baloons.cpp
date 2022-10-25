#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    string s;
    int sum=2;
    do
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        if (n==1)
        {
            cout<<sum<<endl;
        }
        else
        {
            for (int i = 1; i <= n-1; i++)
            {
                if (s[i]==s[i-1])
                {
                    sum=sum+1;
                }
                else
                {
                    sum=sum+2;
                }
                
            }
            cout<<sum<<endl;
            
        }
        

        sum=2;
        



        t--;
    } while (t>0);
    
    return 0;
}