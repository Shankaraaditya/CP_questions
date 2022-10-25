#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
  if (n%2==0 || n%7==0)
  {
    cout<<"YES"<<endl;
  }
  else 
  {
    if (n<7)
    {
        cout<<"NO"<<endl;
    }
    else if (n>7)
    {
        if (n%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
  }

  
  
}
  return 0;
}
