#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int temp;

    set <int> s;
    vector<int> v;
    vector<int>arr;
    vector<int>brr;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        cin>>temp;
        brr.push_back(temp);
    }

   sort(arr.begin(),arr.end());
   sort(brr.begin(),brr.end());
  
   int j=0;

 

    for (int i = 0; i < brr.size(); i++)
   {
        if (brr[i]==arr[j])
        {
            j++;
        }
        else 
        {
            s.insert(brr[i]);
        }
      
   }
   
    std::copy(s.begin(), s.end(), std::back_inserter(v));

    for (int i = 0; i < v.size(); i++)

    {
        cout<<v[i]<<" ";
    }



    
    


    
    return 0;
}