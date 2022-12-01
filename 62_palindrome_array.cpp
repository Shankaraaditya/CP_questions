#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    do
    {
        cin>>n;
        int i=0;
        int count=0;
        int j =n-1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

        }

        while (i!=j && j>i)
        {
            if (a[i]==a[j])
            {
                i++;
                j--;
            }

            else if(a[i]>a[j]){
                a[i]=a[i]-a[j];
                j--;
                count++;
            }

            else if(a[i]<a[j]){
                a[j]=a[j]-a[i];
                i++;
                count++;
            }
                        
        }
        

        cout<<count<<endl;
        

        t--;
    } while (t>0);
    
    return 0;
}