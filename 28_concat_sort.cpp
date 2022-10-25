#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int x,y;

    do
    {
        int flag=0;
        cin>>n;
        int a[n],b[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        
        sort(b,b+n);

        for (int i = 0; i < n-1; i++)
        {
            x=b[i];
            x=find(a,a+n,x)-a;
            y=b[i+1];
            y=find(a,a+n,y)-a;

            if (y<x)
            {
                flag=1;
                break;
            }


                  


            
    
        }
        
        if (flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        



    } while (t>0);
    
    return 0;
}