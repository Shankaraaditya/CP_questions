#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int sum=0;
    int a[6]={0,1,8,12,10,6};
    set<int> s;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; i < a[i]/2; j++)
        {
            if (a[i]%j==0)
            {
                s.insert(j);
            }
            
        }

        for (auto it = s.begin(); it != s.end(); ++it){
            sum=sum + *it ;
        }

    //    if (sum==search(sum,a.begin(),a.end()))
    //    {
    //     /* code */
    //    }
       
        
                        
        
    }
    
    
    



    return 0;
}