#include <bits/stdc++.h>

using namespace std;

bool rearrange(int a[] ,int b[],int n){
    for (int i = 0; i < n; i++)
    {
        int flag=0;
        if (a[i]==b[i] )
        {
            flag=0;
        }
        else
        {
            flag=1;
            return false;
            break;

        }
        

        
    }
    

}



int main(){
    int t ;
    cin>>t;
    int n;
    int x=0,y=0;
    do
    {
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            x=x+x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            y=y+b[i];
        }

        if (/* condition */)
        {
            /* code */
        }
        



        
        


        t--;
    } while (t>0);
    
    return 0;
}