#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    int flag=0;
    do
    {
        cin>>n>>k;
        int a[n];
        
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i]==k)
            {
                flag=1;
                break;
            }
            
        }

        if (n==1)
        {
            if (a[0]==k)
            {
                flag=1;
            }
            
        }
        



        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

        flag=0;
        
        

        t--;
    } while (t>0);
    
    return 0;
}