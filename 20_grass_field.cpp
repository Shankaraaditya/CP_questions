#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,d;
    do
    {
        cin>>a>>b>>c>>d;

        int sum=a+b+c+d;

        if (sum==4)
        {
            cout<<"2"<<endl;
        }
        else if (sum==3 ||sum==2 ||sum==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
        

       
       
       
        
        
        t--;
        
    } while (t>0);
    

    return 0;
}