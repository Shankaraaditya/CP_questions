#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<pair<string,string>> v;
    string s=NULL;
    for (int i = 0; i < 3; i++)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    }

   for (int i = 0; i < v.size(); i++)
   {
      int l;
      l=v[i].first.size();
      for (int j = 0; j < v[i].second.size(); j++)
      {
        if (j+1==l)
        {
            s=s+v[i].second[j];
        }
       
      }
   
   }
   
    




    

    return 0;
}