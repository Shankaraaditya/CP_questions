#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int c;
    int m=0,n=0;
    int x;
    int sum=0;

    do
    {
        cin>>c;
        int a[c];
        for (int i = 0; i < c; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if (a[i]==1)
            {
                m++;
            }
            else if (a[i]==2)
            {
                n++;
            }
            
            
        }
        if (sum%2 !=0)
        {
            cout<<"NO"<<endl;
        }
        
      else  if ((m==0  && n%2 ==0) || (m%2 == 0 && n==0))
        {
            cout<<"YES"<<endl;
        }
        

       else if (m%2 !=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            m=(m/2)*2;
            x=m+n*2;

            if (x%2 ==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        
        

        m=0;
        n=0;
        sum=0;


        t--;
    } while (t>0);
    
    return 0;
}