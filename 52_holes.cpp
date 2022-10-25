#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
 
    string s;
    int sum=0;
    int x=0;

    do
    {
        cin>>n;
        cin>>s;

        for (int i = 0; i < n; i++)
        {
            if (s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='D')
            {
                x=1;
            }
            else if (s[i]=='B')
            {
                x=2;
            }
            else
            {
                x=0;
            }
            sum=sum+x;
            
            
        }
        
        cout<<sum<<endl;

        sum=0;




        t--;
    } while (t>0);
    
    return 0;
}