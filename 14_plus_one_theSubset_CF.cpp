#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    do
    {
        cin>>n;
        long long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }


        

        long long int ma=  *max_element(a,a+n);
        long long int mi=  *min_element(a,a+n);

        cout<<ma-mi<<endl;


        t--;
    } while (t>0);
    
    return 0;
}